#include <vector>
#include <iostream>

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
int main()
{
    std::vector arr{4, 6, 7, 3, 8, 2, 9};
    printArray(arr);
    return 0;
}