#include "pair.h"
#include <iostream>


// Forward Declaration
void foo();

int main()
{
    Pair<double> p2 {3.4, 5.6};
    std::cout<<max(p2)<<" is larger than\n";
    foo();
    return 0;
}