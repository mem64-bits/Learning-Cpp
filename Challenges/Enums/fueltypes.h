#ifndef FUEL_TYPES_H
#define FUEL_TYPES_H

#include <string_view>
#include <string>
#include <optional>
#include <limits>


namespace Cars
{
    enum CarFuelTypes
    {
        petrol,
        diesel,
        electric,
        hydrogen,
    };
}
 
inline constexpr std::string_view getCarFuelType(Cars::CarFuelTypes fueltype){

    using namespace Cars;
    {
        switch(fueltype)
        {
            case petrol : return "petrol";
            case diesel: return "diesel";
            case electric: return "electric";
            case hydrogen: return "hydrogen";
            default: return "???";
        }
    }
}

inline constexpr std::optional<Cars::CarFuelTypes> getFuelTypeFromString(std::string_view sv)
{
    using namespace Cars;
    {
        if(sv == "petrol") return petrol;
        if(sv == "diesel'") return diesel;
        if(sv == "electric") return electric;
        if(sv == "hydrogen") return hydrogen;
        else 
            return "????";
    }

    return {};
}

std::istream& operator>>(std::istream& in, Cars::CarFuelTypes fueltype)
{
    std::string s{};
    in>>s;
    std::optional<Cars::CarFuelTypes> match{getFuelTypeFromString(s)};

     if (match) // if we found a match
    {
        fueltype = *match; // dereference std::optional to get matching enumerator
        return in;
    }

    in.setstate(std::ios_base::failbit);
    return in;
}


std::ostream& operator<<(std::ostream& out, Cars::CarFuelTypes fueltype ){
    out<<getCarFuelType(fueltype);
    return out;
}

#endif