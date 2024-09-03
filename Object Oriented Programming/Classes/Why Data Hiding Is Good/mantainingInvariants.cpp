#include <iostream>
#include <string>



/*class invariants are conditions that must be true 
throughout the lifetime of an object in order 
for the object to stay in a valid state.*/

struct Employee // members are public by default

{
    std::string name {"John"};
    char firstInitial{name[0]};

    void print() const
    {
        std::cout<<"Employee "<<name << 
        "has first inital " << firstInitial<< '\n';
    }

};

int main()
{
    Employee e{}; // Defaults to "John" and "J"
    e.print();

    e.name = "Mark"; // change employee's name to "Mark"
    e.print(); // prints wrong initial

    return 0;
}