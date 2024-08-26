// define our own Pair Type
template <typename T, typename U>
struct Pair
{
    T first{};
    U second{};
};

int main()
{
/* compiles okay both types are specifed 
    in the template arguements*/
    Pair<int,int> p1{1,2};

    // does not compile in C++17 (compiles in C++20)
    // C++ 17 error: class template argument deduction failed:
    Pair p2{1,2};
    return 0;

}

