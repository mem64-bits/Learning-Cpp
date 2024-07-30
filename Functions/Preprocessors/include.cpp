/* Anything that 
starts with '#' in C++ is a preprocessor*/

/*each code file goes through a preprocessing phase. 
In this phase,a program called the preprocessor makes 
various changes to the text of the code 
file temporarily. */

/*A preprocessor directive used access functions
like cout when you '#include' a file it actually replaces the 
#include with the contents of the actual file */ 

#include <iostream>

/*The #define directive can be used to create a macro. In C++, a macro is a rule that defines how input text 
is converted into replacement output text.*/

#define MY_NAME "Tory"

int main(){
    std::cout << MY_NAME;
    return 0;
}