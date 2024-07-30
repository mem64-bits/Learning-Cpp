#include <iostream>
#include <iomanip>
#include "ShapeVols.h"

int main(){
    std::cout<<std::fixed << std::showpoint;
    std::cout << std::setprecision(5);
    std::cout<<"The volume of the sphere is " <<SphereVol(30.5)<<'\n';
    std::cout<<"The volume of the cone is "<<coneVol(10,15)<<'\n';
    std::cout<<"The length of the side c is " << pyth(5,10,0)<<'\n';
    return 0;
}