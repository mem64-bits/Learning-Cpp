#include <iostream>

struct Something
{   
// Defines a non const function
    void print()
    {
        std::cout<<"Non const\n";
    }
// Overloads function to allow use with const objects.
    void print() const
    {
        std::cout<<"Const\n";
    }
    
};

int main()
{
    Something s1 {};
    s1.print()// calls print()

    Const Something s2 {};
    s2.print(); // Calls print() const
    return 0;
}