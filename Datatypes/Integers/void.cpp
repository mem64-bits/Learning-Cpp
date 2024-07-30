#include <iostream>
// Void means no type 

/*Void is a incomplete type that has 
been declared but not yet defined.*/ 

#if 0
void value;
#endif 

/*Most commonly, void is used to indicate 
that a function does not return a value:*/

#include <iostream>
void writeValue(int x) // void here means no return value
{
    std::cout << "The value of x is: " << x << '\n';
    // no return statement, because this function doesn't return a value
}
