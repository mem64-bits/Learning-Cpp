#include <iostream>
#include <string_view>

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
            default: return "????";
        }
    }
}

std::ostream& operator<<(std::ostream& out, Cars::CarFuelTypes fueltype ){
    out<<getCarFuelType(fueltype);
    return out;
}


int main(){

    std::cout<<Cars::CarFuelTypes::<<\n;
    std::cout<<Cars::CarFuelTypes::diesel<<\n;
    std::cout<<Cars::CarFuelTypes::petrol<<\n;
    std::cout<<Cars::CarFuelTypes::petrol<<\n;

    return 0;
}