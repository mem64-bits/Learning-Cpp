#include <iostream>


class Fraction
{
private:
    int m_denominator {};
    int m_numerator {1};

public: 

    // Default constructor
    Fraction(int numerator, int denominator)
        : m_numerator{numerator},
          m_denominator{denominator}
    {
    }

    void print() const
    {
        std::cout<<"Fraction("<<m_numerator<<'/'<<m_denominator<<")\n";
    }

};


int main()
{
    Fraction f{1,3}; // Calls Fraction(int,int) constructor
    Fraction fCopy{f}; // calls copy of f Constructor

    f.print();
    fCopy.print();

    return 0;
}