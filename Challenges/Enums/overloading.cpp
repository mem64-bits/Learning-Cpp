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

using petrol = Cars::CarFuelTypes::petrol;
using diesel = Carrs
 
constexpr std::string_view getCarFuelType(Cars::CarFuelTypes fueltype){

    using namespace Cars::CarFuelTypes;
    switch(fueltype)
    {
        case petrol : return "petrol";
        case diesel: return "diesel";
        case electric: return "electric";
        case hydrogen: return "hydrogen";
        default: return "????";
    }
}

std::ostream& operator<<(std::ostream& out, Cars::CarFuelTypes fueltype ){
    out<<getCarFuelType(fueltype);
    return out;
}


int main(){

    std::cout<<Cars::CarFuelTypes::diesel;

    return 0;
}