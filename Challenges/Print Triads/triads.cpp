#include <iostream>

template <typename T>
struct Triad
{
    T first {};
    T second {};
    T third {};
};

template <typename T>
void print(Triad<T> t)
{
    std::cout<<'['<<t.first<<', '<<t.second<<', '<<t.third<<"] ";
}

template <typename T>
Triad(T)->Triad<T>;

int main()
{
    Triad<int> t1{ 1, 2, 3 };
    Triad<double> t2{ 1.2, 3.4, 5.6 };
    return 0;
}