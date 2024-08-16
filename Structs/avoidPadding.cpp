#include <iostream>

struct PaddedStruct
{
    short a{};
    int b{};
    short b{};
};

struct UnpaddedStruct
{
    int b{};
    short a{};
    short c{};
};


int main()
{
    std::cout<<sizeof(PaddedStruct)<<'\n';
    std::cout<<sizeof(UnpaddedStruct)<<'\n';
    return 0;
}