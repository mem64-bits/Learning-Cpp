#include <iostream>

class Foo 

/*A default constructor is a constructor that accepts no arguments. Typically,
 this is a constructor that has been defined with no parameters.*/
{

public:
/*Prefer value initialization over default 
initialization for all class types.*/

    Foo() // default constructor
    {
        std::cout<<"Foo default Constructor";
    }
};

int main()
{
    Foo foo{}; // no initilizers default constructor used
    return 0;
}