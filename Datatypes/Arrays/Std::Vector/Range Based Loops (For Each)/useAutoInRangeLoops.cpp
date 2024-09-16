#include <iostream>
#include <vector>

int main()
{
    std::vector fibonacci { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };

    for (auto num : fibonacci) // compiler will deduce type of num to be `int`
       std::cout << num << ' ';

    std::cout << '\n';

    return 0;
}