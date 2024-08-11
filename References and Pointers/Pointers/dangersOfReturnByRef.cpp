#include <iostream>

const int& returnByConstReference(const int& ref)
{
    return ref;
}

/*Reference lifetime extension
 does not work across function boundaries.
 As these values are temporary and are destoyed
  after the function is executed.*/
  
int main()
{
    // case 1: direct binding
    const int& ref1 { 5 }; // extends lifetime
    std::cout << ref1 << '\n'; // okay

    // case 2: indirect binding
    const int& ref2 { returnByConstReference(5) }; // binds to dangling reference
    std::cout << ref2 << '\n'; // undefined behavior

    return 0;
}