#include <vector>

int main()
{
    const std::vector<int> prime { 2, 3, 5, 7, 11 }; // prime and its elements cannot be modified
    // std::vector can't be made const
    #if 0
    constexpr std::vector<int> nums {2, 4, 6, 8, 10};
    #endif
    
    return 0;
}