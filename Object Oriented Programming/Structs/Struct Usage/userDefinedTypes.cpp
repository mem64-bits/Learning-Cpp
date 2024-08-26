#include <iostream>
// Define a program-defined type named Fraction so 
// the compiler understands what a Fraction is

// you can use structs in header files 
struct Fraction
{   int numerator{};
    int denominator{};  
};


// Overloads << to allow printing of type Fraction
std::ostream& operator<<(std::ostream& out, const Fraction& f){
    out<<f.numerator<<"/"<<f.denominator;
    return out;
}

    
int main(){
Fraction f{3,4};
// makes an object of the type Fraction



std::cout<<f;
    return 0;
}