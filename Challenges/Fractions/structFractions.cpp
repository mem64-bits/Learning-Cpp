#include <iostream>


struct Fraction
{
    int numerator {};
    int denominator {};
};

Fraction getUserFraction()
{   
    Fraction fraction{};
    std::cout<<"Enter a value for the numerator: ";
    std::cin>>fraction.numerator;

    std::cout<<"\nEnter a value for the denominator: ";
    std::cin>>fraction.denominator;
    std::cout<<'\n'<<'\n';
    return fraction;
}

Fraction fractMultiply(const Fraction& fraction_1, const Fraction& fraction_2)
{
    Fraction result{(fraction_1.numerator*fraction_2.numerator),(fraction_1.denominator*fraction_2.denominator)};
    return result;
}

std::ostream& operator<<(std::ostream& out, const Fraction& fraction)
{
    out<<fraction.numerator<<fraction.denominator;
    return out;
}

int main(){
    Fraction result {fractMultiply(getUserFraction(),getUserFraction())};
    std::cout<<"Your fractions multiplied together: "<<result.numerator<<"/"<<result.denominator;
    return 0;
}
