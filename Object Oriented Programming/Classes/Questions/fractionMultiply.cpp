#include <iostream>

class Fraction
{
private: 
    int m_numerator{0};
    int m_denominator{1};

public:

int getNumerator() const {return m_numerator;}
int getDenominator() const {return m_denominator;}

void setNumerator(const int& numerator)
{
    m_numerator = numerator;
}

void setDenominator(const int& denominator) 
{
    m_denominator = denominator;
}



Fraction(int numerator=0, int denominator=1)
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

Fraction getFraction()
{
    Fraction temp{};
    std::cout << "Enter a value for numerator: ";
    std::cin >> temp.m_numerator;
    std::cout << "Enter a value for denominator: ";
    std::cin >> temp.m_denominator;
    std::cout << '\n';

    return temp;
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