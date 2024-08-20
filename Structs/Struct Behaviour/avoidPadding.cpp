#include <iostream>


/*compiler which add padding, making 
the struct's byte size bigger*/

struct PaddedStruct
{
    short a{};
    int b{};
    short c{};
};

/*Order Structs form biggest 
to smallest to minimize padding*/

struct UnpaddedStruct
{
    int b{};
    short a{};
    short c{};
};


int main()
{   
//  prints 12
    std::cout<<sizeof(PaddedStruct)<<'\n';
// prints 8
    std::cout<<sizeof(UnpaddedStruct)<<'\n';
    return 0;
}