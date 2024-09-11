#include <iostream>
#include <vector>

int main()
{
    std::vector prime{ 2, 3, 5, 7, 11 };

    std::cout << prime.at(3); // print the value of element with index 3
    
    #if 0
    std::cout << prime.at(9); // invalid index (throws exception)
    #endif
    
    return 0;
}