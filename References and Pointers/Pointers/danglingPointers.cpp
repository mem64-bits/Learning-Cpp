#include <iostream>

int main(){
    int x{5};
    int* ptr{&x};
    std::cout<<*ptr<<'\n';

    {
        int y{6};
        ptr = &y;
        std::cout<<*ptr<<'\n';
    }
// y goes out of scope, and ptr is now dangling

    std::cout<<*ptr; // undefined behavior from 
    // dereferencing a dangling pointer
    return 0;
}