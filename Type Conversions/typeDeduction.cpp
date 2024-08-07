#include <iostream>

/*the auto keyword is used to automatically 
deduce the type of an object */
int main()
{
    auto d{ 5.0 }; // 5.0 is a double literal, so d will be type double
    auto i{ 1 + 2 }; // 1 + 2 evaluates to an int, so i will be type int
    auto x { i }; // i is an int, so x will be type int too

    std::cout<<d<<'\n';
    std::cout<<i<<'\n';
    std::cout<<x;
    return 0;
}
