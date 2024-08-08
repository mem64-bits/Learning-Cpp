#include <iostream>

// a pointer is a special variable that stores the 
// memory address of other variables
/*
int;  // a normal int
int&; // an lvalue reference to an int value
int*; // a pointer to an int value 
(holds the address of an integer value)
*/

int main(){
    int x{5};

// stores the memory address of x int in 
// a special pointer variable called ptr 



// holds memory address of x
    int * ptr{&x}; 

    /* use dereference operator (*) to get value stored
at the memory address of x */
    std::cout<<*ptr;
    return 0;
}