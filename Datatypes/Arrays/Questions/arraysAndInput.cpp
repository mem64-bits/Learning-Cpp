#include <iostream>
#include <vector>
#include <limits>
#include <utility>


void getInput()
{

    int num{};
    do
    {
        std::cout<<"Enter number between 1 and 9: ";
        std::cin.ignore(std::numeric_limits<int>::max());
        std::cin>>num;

    } while (num > 9 || num < 0);

    
    
    
}
int main()
{

    return 0;
}