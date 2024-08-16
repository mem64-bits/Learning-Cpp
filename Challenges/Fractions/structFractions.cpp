#include <iostream>


struct Fraction
{
    int numerator {0};
    int denominator {1};
};

Fraction getUserFraction()
{   
    Fraction temp{};
    std::cout<<"Enter a value for the numerator: ";
    std::cin>>temp.numerator;

    std::cout<<"\nEnter a value for the denominator: ";
    std::cin>>temp.denominator;
    std::cout<<'\n';
    return temp;
}

Fraction fractMultiply(const Fraction& fraction_1, const Fraction& fraction_2)
{
    Fraction result{(fraction_1.numerator*fraction_2.numerator),(fraction_1.denominator*fraction_2.denominator)};
    return result;
}

void printFraction(const Fraction& f)
{
     std::cout<<f.numerator<<"/"<<f.denominator;
}

int main(){
    Fraction f1{getUserFraction()};
    Fraction f2{getUserFraction()};
    std::cout << "Your fractions multiplied together: ";
    printFraction(fractMultiply(f1,f2));
    return 0;
}
