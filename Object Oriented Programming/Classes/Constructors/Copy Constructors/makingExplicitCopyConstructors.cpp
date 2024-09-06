#include <iostream>

class Fraction
{
private:
    int m_numerator {};
    int m_denominator {};

public:
// Default constructor
    Fraction(int numerator, int denominator)
    : m_numerator {numerator},
      m_denominator {denominator}
    {
    }

// Copy constructor
    Fraction(const Fraction& fraction)
    : m_numerator{fraction.m_numerator},
      m_denominator{fraction.m_denominator}
    {
        std::cout<<"Copy Constructor\n";
    }

    void print() const
    {
        std::cout<<"Fraction("<<m_numerator<<", "<<m_denominator<<")\n";
    }

};

int main()
{
    Fraction f{3,4};
    Fraction fCopy{f};

    f.print();
    fCopy.print();

    return 0;
}