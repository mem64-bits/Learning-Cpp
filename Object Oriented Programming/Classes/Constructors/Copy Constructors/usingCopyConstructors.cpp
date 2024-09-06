#include <iostream>


/*A copy constructor is a constructor that is used to 
initialize an object with an existing object of the same type. 

After the copy constructor executes, the newly created object 
should be a copy of the object passed in as the initializer.


C++ does this automatically if we don't explicitly make one ourselves
*/

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