#include <iostream>
#include <vector>

template <typename T>
void printReverse(const std::vector<T>& arr)
{

    /*Solves problem by converting signed,
    but for loop is harder to read*/
    
    for (int index{ static_cast<int>(arr.size()) - 1}; index >= 0; --index) // index is signed
    {
        std::cout << arr[static_cast<std::size_t>(index)] << ' ';
    }

    std::cout << '\n';
}

int main()
{
    std::vector arr{ 4, 6, 7, 3, 8, 2, 1, 9 };

    printReverse(arr);

    return 0;
}