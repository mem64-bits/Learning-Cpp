#include <iostream>
#include <vector>

template <typename T>
void printReverse(const std::vector<T>& arr)
{
    // index is unsigned
    for(std::size_t index{arr.size()-1}; index >= arr; --index)
    {
        std::cout<<arr[index]<<' ';
    }
    std::cout<<'\n';
}

int main()
{
    std::vector arr{ 4, 6, 7, 3, 8, 2, 1, 9 };

    printReverse(arr);

    return 0;
}