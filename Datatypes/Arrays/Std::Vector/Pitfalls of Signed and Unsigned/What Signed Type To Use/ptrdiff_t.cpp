#include <vector>
#include <iostream>


/*
std::size_t = unsigned
std::ptrdiff_t  = signed 

std::ptrdiff_t is essentially a special signed type 
to be used with indexes

std::ptrdiff_t has a weird name so it is often typedefed*/
using Index = std::ptrdiff_t;


int main()
{

    std::vector arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// Sample loop using index
    for (Index index{ 0 }; index < static_cast<Index>(arr.size()); ++index)
    {
        if(arr[index] % 2 == 0)
            std::cout<<arr[index]<<' ';
    }

    return 0;

}