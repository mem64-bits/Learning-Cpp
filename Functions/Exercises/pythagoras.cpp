#include <iostream>
#include <cmath>


void hypotenuse(double num1,double num2)
{
    double c {sqrt(pow(num1,2)+pow(num2,2))};
    std::cout << "The hypotenuse is " << c;
}


int main()
{   
    std::cout << "Enter in a: ";
    double a {};
    std::cin >> a;

    std::cout << "Enter in b: ";
    double b {};
    std::cin >> b;
    
    hypotenuse(a,b);
    return 0;
}