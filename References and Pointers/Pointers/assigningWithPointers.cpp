#include <iostream>

int main(){
    int x{5};  
    int* ptr{&x}; // creates pointer to 

    std::cout<<*ptr<<'\n';
    
    int y {6};
    ptr = &y;
    std::cout<<*ptr<<'\n';
    
    *ptr = 6;
    std::cout<<*ptr<<'\n';
    
    return 0;

}