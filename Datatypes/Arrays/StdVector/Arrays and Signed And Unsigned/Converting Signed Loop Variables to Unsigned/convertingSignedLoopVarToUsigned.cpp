#include <iostream>
#include <type_traits> // for std::is_integral and std::is_enum
#include <vector>


/*When we convert from a signed to unsigned loop variable 
we should use a short named function as using static_cast
over and over again makes code hard to read

We use the functions std::is_integral and std::is_enum
with static_assert to validate if we we converting 
is an integral based type*/

// alias makes type easier to understand
using Index = std::ptrdiff_t;

template <typename T>
constexpr std::size_t toUZ(T value)
{
    static_assert(std::is_integral<T>() || std::is_enum<T>());
    return static_cast<std::size_t>(value);
}

int main()
{
    std::vector arr{ 9, 7, 5, 3, 1 };

    //auto length { static_cast<Index>(arr.size()) };  // in C++20, prefer std::ssize()
     auto length { static_cast<Index>(std::ssize(arr)) };
    for (auto index{ length-1 }; index >= 0; --index)
        std::cout << arr[toUZ(index)] << ' '; // use toUZ() to avoid sign conversion warning

    return 0;
}