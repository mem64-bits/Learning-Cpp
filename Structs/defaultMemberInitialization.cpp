#include <iostream>

struct Something
{
    int x;       // no initialization value (bad)
    int y {};    // value-initialized by default
    int z { 2 }; // explicit default value
};

std::ostream& operator<<(std::ostream& out, Something& const s)
{
    out<<s;
    return s;
}

int main()
{
    Something s1; // s1.x is uninitialized, s1.y is 0, and s1.z is 2
    std::cout<<s1.z;
    return 0;
}