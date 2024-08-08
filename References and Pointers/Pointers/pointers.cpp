#include <iostream>

// & is the memory address operator
/* 
* is the dereference variable 
gets the value at a memory address*
*/

int main(){
    int x{5};

// reference to x 
    int& y{x};
    
//prints x 
std::cout<<x<<'\n';

// prints out the memory address of x 
    std::cout<<&x<<'\n';

// reference shares memory address as x
    std::cout<<&y<<'\n';

// Prints the value stored at the mem address x
    std::cout<<*(&x);

    return 0;
}