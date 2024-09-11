#include <iostream>
#include <vector>

template <typename T>
void passByRef(std::vector<T>& arr)
{
    std::cout<<arr[0]<<'\n';
}