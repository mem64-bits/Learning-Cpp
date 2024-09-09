#include <iostream>

/*Unlike other languages c++ doesnt support static constructors
but there are a number of ways to work around this*/

/*If your static variable can be directly initialized,
 no constructor is needed: you can initialize the static member 
 variable at the point of definition (even if it is private).*/
struct Chars
{
    char first{};
    char second{};
    char third{};
    char fourth{};
    char fifth{};
};

struct MyClass
{
	static inline Chars s_mychars { 'a', 'e', 'i', 'o', 'u' }; // initialize static variable at point of definition
};

int main()
{
    std::cout << MyClass::s_mychars.third; // print i

    return 0;
}