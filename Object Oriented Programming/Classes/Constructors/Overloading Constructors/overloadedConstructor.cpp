#include <iostream>


/*since Constructors are functions 
they can also be overloaded*/
class Foo
{
private:
    int m_x {};
    int m_y {};

public:
    Foo() // default constructor
    {
        std::cout<<"Foo constructed\n"; 
    }

    Foo(int x, int y)
    :m_x{x}, m_y{y}
    {
        std::cout<<"Foo("<<m_x<<", "<<m_y<<") constructed\n";
    }
};

int main()
{
    Foo foo1{}; // Calls Foo() constructor
    Foo foo2{6,7}; // Calls overloaded Foo(int,int)
    return 0;
}