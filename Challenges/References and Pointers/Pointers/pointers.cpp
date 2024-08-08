#include <iostream>

// & is the memory address operator
/* 
* is the dereference variable 
gets the value at a memory address*
*/

int main(){
    int x{};

    // reference to x 
    int& y{x};

    // prints out the memory address of x 
    std::cout<<&x<<'\n';

    // reference shares memory address
    std::cout<<&y<<'\n';

    std::cout<<*(&x);

    return 0;
}