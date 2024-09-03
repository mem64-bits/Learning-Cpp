#include <iostream>

struct Something

{
    int value1 {};
    int value2 {};
    int value3 {};
};


int main()
{
    Something something;
    something.value1 = 5;
    std::cout<<something.value1 << '\n';
    return 0;
}