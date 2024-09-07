#include <iostream>

class Fraction
{
private: 
    int m_numerator{0};
    int m_denominator{1};

public:

int getNumerator() const {return m_numerator;}
int getDenominator() const {return m_denominator;}


explicit Fraction(int numerator =0, int denominator=1)
: m_numerator{numerator}, m_denominator{denominator}
{
}

void printFraction() const
{
    std::cout<<getNumerator()<<'/'<<getDenominator()<<'\n';
}

 Fraction multiply (const Fraction& f )
{
    return Fraction{ m_numerator * f.m_numerator, m_denominator * f.m_denominator };
}

void getFraction()
{
    
    std::cout << "Enter a value for numerator: ";
    std::cin >> m_numerator;
    std::cout << "Enter a value for denominator: ";
    std::cin >> m_denominator;
    std::cout << '\n';
}

};



int main()
{
    Fraction f1 {};
    Fraction f2 {};

    f1.getFraction();
    f2.getFraction();

    std::cout << "Your fractions multiplied together: ";
    f1.multiply(f2).printFraction();
    return 0;
}