#include <iostream>

/*Static variables exist independently of the class
objects and can be accessed directly without the use of an
object*/


class Something
{
public:
    static int s_value; // declares static variable
};

/*This line serves two purposes: it instantiates the static member 
variable (just like a global variable), and initializes it. 
If no initializer is provided, static member variables 
are zero-initialized by default.*/

int Something::s_value{1}; //defines the static member variable


int main()
{
    // no object of type Something made
    // uses :: operator to access static member object
    Something::s_value = 2;
    std::cout<<Something::s_value<<'\n';
    return 0;
}
