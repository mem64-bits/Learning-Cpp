#include <iostream>

/*In structs and classes static variables are shared 
by all objects of the class*/
struct Something
{
    static int s_value; // now static
};

int Something::s_value{ 1 }; // initialize s_value to 1

int main()
{
    Something first{};
    Something second{};

    first.s_value = 2;

    std::cout << first.s_value << '\n'; // prints 2
    // the values of first.s_value and second.s_value are shared
    std::cout << second.s_value << '\n'; // also prints 2
    return 0;
}