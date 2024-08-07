#include <iostream>

/*A non-type template parameter is a template 
parameter with a fixed type that serves as 
a placeholder for a constexpr value passed 
in as a template argument.*/

template <int N>
void print()
{
    std::cout << N << '\n'; // use value of N here
}

int main()
{
    print<5>(); // 5 is our non-type template argument

    return 0;
}