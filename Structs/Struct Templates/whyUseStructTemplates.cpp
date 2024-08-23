#include <iostream>


// defines a struct
struct Pair
{
    int first {};
    int second {};
};

// We might want to change the type of the members in the structs later in the program

struct Pair // compile error: erroneous redefinition of Pair
{
    double first{};
    double second{};
};

// function to compare struct members of an int type

constexpr int max(Pair p)
{
    return (p.first < p.second ? p.second : p.first);
}


// The  overload doesnt work because the compiler can't tell which struct 
// to use based on the return type alone

#if 0
constexpr double max(Pair p)
{
    return (p.first < p.second ? p.second : p.first);
}
#endif



int main()
{
    Pair p1{ 5, 6 };

    // changing the type of struct to double
    // doesn't work

    Pair p2 {5.0,6.0};

    std::cout << max(p1) << " is larger\n";
    std::cout<<max(p2) << " is larger\n";
    return 0;
}