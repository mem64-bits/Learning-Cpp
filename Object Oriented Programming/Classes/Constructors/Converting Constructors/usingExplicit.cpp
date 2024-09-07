#include <iostream>


/*we can use the explicit keyword to tell the compiler that 
a constructor should not be used as a converting constructor.

Making a constructor explicit has two notable consequences:

    An explicit constructor cannot be used to do copy initialization 
    or copy list initialization.

    An explicit constructor cannot be used to do implicit conversions 
    (since this uses copy initialization or copy list initialization).

*/

class Dollars
{
private:
    int m_dollars{};

public:
    explicit Dollars(int d) // now explicit
    : m_dollars{d}
    {     
    }

    int getDollars() const {return m_dollars;}
};

void print(Dollars d) 
{
    std::cout<<"$"<<d.getDollars();
}

int main()
{
    #if 0
    print(5);// compiler error: Dollars(int) is explicit
    #endif
    
    print(Dollars{5}); // since 5 is the Dollars type, no conversation is done
    return 0; 
}