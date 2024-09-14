#include <iostream>
#include <vector>

template <typename T>
void printReverse(const std::vector<T>& arr)
{
    // index is unsigned

    /* Since index is unsigned, using index >= 0 in the 
    for loop makes no sense as a unsigned num can't be 
    negative meaning the loop would never end 
    
    also decrementing 0 in an unsigned number 
    leads to an out of bounds error leading
    to U.B*/
    
    for(std::size_t index{arr.size()-1}; index >= 0; --index)
    {
        std::cout<<arr[index]<<' ';
    }
    std::cout<<'\n';
}

int main()
{
    std::vector arr{ 4, 6, 7, 3, 8, 2, 1, 9 };

    // undefined behaviour
    //prints 9 1 2 8 3 7 6 4 then U.B
    printReverse(arr);

    return 0;
}