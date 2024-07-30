#include <iostream>

/*We use if 0 to stop a block of code from 
being compiled */

/*useful to comment out code that contains 
multiline comments*/

int main(){
#if 0
    std::cout << "This wont be compiled"
#endif
    std::cout << "Hello ,World";
    return 0;
}