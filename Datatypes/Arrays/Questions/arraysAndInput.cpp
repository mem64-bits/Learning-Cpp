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

template <typename T, typename U>
int searchArray(const std::vector<T>& arr,  U val )
{
    for(std::size_t index{0}; index < arr.size(); ++index)
    {
        if(arr[index] == val)
            return static_cast<int>(index);
    }

      return -1;
}

int getInput()
{
    int num{}; 
    do
    {
        std::cout<<"Enter number between 1 and 9: ";
        std::cin>>num;

        // if the user entered an invalid character
        if (!std::cin)
            std::cin.clear(); // reset any error flags

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    } while (num < 1 || num > 9 );
    
    return num;
 
}

int main()
{
    
   std::vector arr{ 4.4, 6.6, 7.7, 3.3, 8.8, 2.2, 1.1, 9.9 };
   auto val { getInput() };

    printArray(arr);
    int arr_location {searchArray(arr,val)};

    if(arr_location != -1)

        std::cout<<"The number "<<val<<" has index "
        <<arr_location<<'\n';
        
    else
        std::cout<<"The number "<<val<< " was not found\n";
      
    return 0;
}