#include <iostream>
/*conditional compilation preprocessor directives 
allow you to specify under what conditions 
something will or won’t compile.*/

// #ifdef #ifndef #endif

#define COMPILE 

/* #ifdef preprocessor directive 
allows the preprocessor to check 
whether an identifier has been 
previously #defined.*/


int main(){

/*this part of the program will 
compile because COMPILE is defined*/

// code between #ifdef and endif will be checked

#ifdef COMPILE 
    std::cout << "This will be compiled and shown" << '\n' << "to the screen";
#endif 

// will be left out because NOT_COMPILE isn't defined
#ifdef NOT_COMPILE
std::cout << "This part won't be compiled"
#endif
return 0;
}
