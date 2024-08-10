#include <iostream>

/* there is one additional value that a pointer 
can hold: a null value. A null value is a special 
value that means something has no value. 

When a pointer is holding a null value,
 it means the pointer is not pointing at anything. 
Such a pointer is called a null pointer.*/
int main(){
//initilizing a null pointer
    int* null_ptr{}; // don't dereference null pointer
    int x{5};

// A null pointer can be given a value
null_ptr = &x;
std::cout<<*null_ptr;

    return 0;
}