#include <iostream>
#include <type_traits> // for std::is_integral and std::is_enum
#include <vector>

using Index = std::ptrdiff_t;

template <typename T>
constexpr std::size_t toUZ(T value)
{
    static_assert(std::is_integral<T>() || std::is_enum<T>());
    return static_cast<std::size_t>(value);
}