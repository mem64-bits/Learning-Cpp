#include <iostream>
#include <vector>

int main()
{
    std::vector prime{ 2, 3, 5, 7, 11 };
    // C++20, returns length as a large signed integral type
    std::cout << "length: " << std::ssize(prime);

    /*We still need to static_cast if we are 
    storing the length of an array as the 
    type returned could be smaller than an int*/

    int length{static_cast<int>(std::ssize(prime))};
    std::cout<<"\nprime has length "<<length;

    return 0;
}