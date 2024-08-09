#include <iostream>

int main(){ // assume computer is 32-bit
    char chPtr{}; // char is 1
    int iPtr{};// int is usually 4
    long double ldPtr{};// long doubles are 8 or 12 bytes

    std::cout<<sizeof(chPtr)<<'\n'; 
    std::cout<<sizeof(iPtr)<<'\n';
    std::cout<<sizeof(ldPtr)<<'\n';
    return 0;
}