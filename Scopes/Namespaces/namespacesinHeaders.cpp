#include <iostream>
#include <iomanip> // for std::setprecision
#include "ShapeVols.h"

int main(){
    std::setprecision(2);
    std::cout<<"The volume of the sphere is: "<<ShapeFormulas::SphereVol(30.5)<<"cm³"<<'\n';
    std::cout<<"The volume of the hemisphere is: "<<ShapeFormulas::hemiVol(30.5)<<"cm³"<<'\n';
    std::cout<<"The volume of the cone is: "<<ShapeFormulas::coneVol(20.5,12.5)<<"cm³"<<'\n';
}