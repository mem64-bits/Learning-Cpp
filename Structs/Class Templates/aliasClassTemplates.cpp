#include <iostream>

template <typename T>
struct Pair
{
    T first {};
    T second {};
};

template <typename T>
void print(Pair<T>&p)
{
    std::cout<<p.first<<' '<<p.second<<'\n';
}

int main()
{
// Creates alias for template class Pair with a type of int.
    using Point = Pair<int>;

// compiler replaces point with Pair<int>.
    Point p {1,2};
    print(p);
    return 0;
}