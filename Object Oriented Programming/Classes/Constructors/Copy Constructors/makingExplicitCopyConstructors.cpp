#include <iostream>


/* Prefer defining our own copy constructors.

Copy Constructors should have no other side effects 
other than copying, unless there's a reason to.*/
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
        std::cout<<"Copy Constructor called\n";
    }

    void print() const
    {
        std::cout<<"Fraction("<<m_numerator<<", "<<m_denominator<<")\n";
    }

};

int main()
{
    Fraction f{3,4}; // calls Fraction(int, int) constructor
    
// point where "Copy Constructor is called" is printed out
    Fraction fCopy{f}; // calls Fraction(const Fraction& fraction)

    f.print(); // prints default constructor
    fCopy.print(); // prints copy

    return 0;
}