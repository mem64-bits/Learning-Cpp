#include <iostream>

int main(){
// #ifndef compiles everrthing enclosed if macro isn't defined

#ifndef NOT_DEFINED
    std::cout << "This will compile because \n"
              << "'NOT_DEFINED' ISN'T DEFINED";
#endif

    return 0;
}