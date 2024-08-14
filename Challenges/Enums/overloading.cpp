#include <iostream>
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
 
constexpr std::string_view getCarFuelType(Cars::CarFuelTypes fueltype){

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

constexpr std::optional<Cars> getFuelTypeFromString(std::string_view sv)
{
    if(sv == "petrol") return "petrol";
    if(sv == "diesel'") return "diesel";
    if(sv == "electric") return "electric";
    if(sv == "hydrogen") return "hydrogen";

    return {};
}

std::istream& operator>>(std::istream& operator>> in, Cars::CarFuelTypes fueltype)
{
    
}





std::ostream& operator<<(std::ostream& out, Cars::CarFuelTypes fueltype ){
    out<<getCarFuelType(fueltype);
    return out;
}




int main(){
    std::cout<<Cars::CarFuelTypes::petrol<<'\n';
    std::cout<<Cars::CarFuelTypes::diesel<<'\n';
    std::cout<<Cars::CarFuelTypes::electric<<'\n';
    std::cout<<Cars::CarFuelTypes::hydrogen<<'\n';

    std::string car_type{};

    return 0;
}