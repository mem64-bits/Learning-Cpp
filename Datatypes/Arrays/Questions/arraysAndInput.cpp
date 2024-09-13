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

template <typename T>
int searchArray(std::vector<T>& arr, const int target_num)
{
    for(std::size_t index{0}; index < arr.size(); ++index)
    {
        if(arr[index] == target_num)
            return static_cast<int>(index);

        else
            return {};
    }

    return {};
}

int getInput()
{

    int num{}; 
    do
    {
        std::cout<<"Enter number between 1 and 9: ";
        std::cin.ignore(std::numeric_limits<int>::max());
        std::cin>>num;

    } while (num > 9 || num < 0);
    return num;
 
}

int main()
{
    std::vector arr{ 4, 6, 7, 3, 8, 2, 1, 9};
   const int target_num { getInput() };

    printArray(arr);
    int arr_location {searchArray(arr,target_num)};

    if(arr_location == NULL)
        std::cout<<"The number "<<target_num<< "was not found\n";
    

    else
        std::cout<<"The number "<<target_num<<" has index "
        <<arr_location<<'\n';
        
    return 0;
}