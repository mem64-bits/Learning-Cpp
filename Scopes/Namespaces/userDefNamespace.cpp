#include <iostream>
#include <cmath>


namespace MathConsts // define a namespace called MathConsts
{
    constexpr double pi{3.141592};
    constexpr double SphereVol(double radius){
    return (4/3.f)*pi*pow(radius,3);
}
}

namespace MathFormulas // define a namespace called Mathformulas
{
    constexpr double pi{3.141592};
    constexpr double SphereVol(double radius){
    return (4/3.f)*pi*pow(radius,3);
}
}

int main(){
    // :: = Scope Resolution operator
    // :: is used to access objects in namespaces
    std::cout<<"MathConsts Namespace Objects\n";
    std::cout<<MathConsts::SphereVol(3)<<'\n';
    std::cout<<MathConsts::pi<<'\n'<<'\n';

    /*As the functions are both defined in seperate namespaces 
     We can freely define the functions and variables twice*/
    std::cout<<"MathFormulas Objects\n";
    std::cout<<MathFormulas::SphereVol(3)<<'\n';
    std::cout<<MathFormulas::pi;

}