template <typename T, typename U>
struct Pair
{
    T first{};
    U second{};
};

// Here's a deduction guide for our Pair (needed in C++17 only)
// Pair objects initialized with arguments of type T and U should deduce to Pair<T, U>
template <typename T, typename U>
Pair(T, U) -> Pair<T, U>;


int main()
{
// Explictly specifies class template Pair (C++11 onward)
    Pair<int,int> p1{1,2};

// CTAD used to deduce Pair<int, int> from the initializers (C++17)
    Pair p2{ 1, 2 };    
}