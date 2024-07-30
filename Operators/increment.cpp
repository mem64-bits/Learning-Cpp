#include <iostream>

int main(){
    int x{5};
    // (++) ++x, Increment x, then return x
    // x is incremented to 6, x is evaluated to 
    // the value 6, and 6 is assigned to y

    int y{++x};
    std::cout<<x<<' '<<y;
    return 0;
}