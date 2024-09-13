#include <iostream>
#include <vector>
#include <limits>
#include <utility>


template <typename T>
void printArray(std::vector<T>& arr)
{
    for (std::size_t index{ 0 }; index < arr.size(); ++index)
    {
        std::cout << arr[index] << ' ';
    }

    if (arr.size() > 0)
        std::cout << '\n';

}

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
    std::vector arr{ 4, 6, 7, 3, 8, 2, 1, 9};
    printArray(arr);
    return 0;
}