#include <iostream>
// Define a program-defined type named Fraction so 
// the compiler understands what a Fraction is

// you can use structs in header files 
struct Fraction
{   int nominator{};
    int denominator{};  
};


    
int main(){
Fraction f{3,4};
// makes an object of the type Fraction

std::cout<<f;

    return 0;
}