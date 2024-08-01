#include <iostream>
#include <cmath>

/*a goto is an unconditional jump 
to another part of the code*/

int main(){
double num{};
// This is a statement label
tryAgain:    
    std::cout<<"Enter a non negetive number: ";

std::cin>>num;

if (num < 0.0){
// jumps back to execute code in TryAgain label
    goto tryAgain; 
}
    return 0;
}