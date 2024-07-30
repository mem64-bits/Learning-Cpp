#include <iostream>
#include "add.h" // function declaration is imported from 
#include "subtract.h"

int main()
{
    std::cout << "The sum of 3 and 4 is " << add(3,4) << '\n';
    std::cout << "10 take away 5 is " << subtract(10,5) << '\n';
    return 0;
}