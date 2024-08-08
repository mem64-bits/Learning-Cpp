#include <iostream>


/*
int;  // a normal int
int&; // an lvalue reference to an int value
int*; // a pointer to an int value 
(holds the address of an integer value)
*/

int main(){
    int x{5};
    int * ptr{&x};
    std::cout<<*ptr;
    return 0;
}