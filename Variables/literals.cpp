#include <iostream>

int main(){
// A literal is a fixed value that is 
// been put directly into the source code
// literals are constant can't be changed

// e.g

    std::cout << 5 << '\n'; // can't be changed, prints out literal
    int x { 5 };            // variable can
    std::cout << x << '\n'; // print the value of a variable
    return 0;
}