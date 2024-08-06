#include <iostream>

int main()
{
    int x { 10 };
    int y { 4 };


    double d { (double)x / y }; // convert x to a double so we get floating point division
    
    // or you can do this
    double z{double(x/y)};
    std::cout << d << '\n'; // prints 2.5
    std::cout<<z;

    return 0;
}