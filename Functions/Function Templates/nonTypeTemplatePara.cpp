#include <iostream>

/*A non-type template parameter is a template 
parameter with a fixed type that serves as 
a placeholder for a constexpr value passed 
in as a template argument.*/

template <int N>
void print()
{
    std::cout << N << '\n'; // use value of N here
}

// C ++ 17 we can use auto to automatically determine 
// template parameters

template <auto N>
void print_v2(){
    std::cout<<N<<'\n';
}

int main()
{
    print<5>(); // 5 is our non-type template argument
    print_v2<1.95>();

    return 0;
}