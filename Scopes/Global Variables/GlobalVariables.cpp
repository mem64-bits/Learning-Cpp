#include <iostream>

// Global Variables are variables 
// that are made outside of functions
int g_x{};

// Namespaces are preferred for global variables
namespace MathConsts{
    double pi{3.14};
}
void doSomething(){
    // global variables can be seen 
    // and used everywhere in the file
    g_x= 3;
    std::cout<<g_x<<'\n';
}

int main(){
    doSomething();
    std::cout<<g_x<<'\n';
    g_x= 5;
    std::cout<<g_x<< '\n';
    std::cout<<MathConsts::pi;
    return 0;
}