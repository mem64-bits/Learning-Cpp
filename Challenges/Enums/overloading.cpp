#include <iostream>
#include "fueltypes.h"





int main(){
    std::cout<<Cars::CarFuelTypes::petrol<<'\n';
    std::cout<<Cars::CarFuelTypes::diesel<<'\n';
    std::cout<<Cars::CarFuelTypes::electric<<'\n';
    std::cout<<Cars::CarFuelTypes::hydrogen<<'\n';

    Cars::CarFuelTypes car_type{};
    std::cout<<"Enter the car fuel type you have: ";
    std::cin>>car_type; 
    return 0;
}