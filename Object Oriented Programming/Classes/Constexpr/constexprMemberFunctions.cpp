#include <iostream>

struct Pair
{
    int m_x{};
    int m_y{};

    constexpr int greater() const
    {
        return(m_x > m_y ? m_x : m_y);
    }
};

int main()
{
    Pair p {5,6};
    std::cout<<p.greater(); // evauluates at compile time

    #if 0

// error: p not constexpr
    constexpr int g{p.greater()};
    std::cout<<g;
    #endif
}