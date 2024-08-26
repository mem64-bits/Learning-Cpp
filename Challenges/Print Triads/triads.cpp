#include <iostream>

template <typename T>
struct Triad
{
    T first {};
    T second {};
    T third {};
};

template <typename T>
void print(Triad<T>& t)
{
    std::cout<<"["<<t.first<<", " <<t.second<<", "<<t.third<<"]";
}

// C++17
/* template <typename T>
Triad(T,T,T)->Triad<T>;
 */
int main()
{
    Triad t1{ 1, 2, 3 };
    Triad t2{ 1.2, 3.4, 5.6 };
    print(t1);
    print(t2);
    return 0;
}