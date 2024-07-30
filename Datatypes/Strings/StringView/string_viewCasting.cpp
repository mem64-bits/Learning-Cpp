#include <iostream>
#include <string>
#include <string_view>

void printString(std::string str)
{
	std::cout << str << '\n';
}

int main(){
    // We can't normally convert string_view into a string
    std::string_view sv{"Hello World"};

    // doesn't wont code won't compile
    #if 0
    std::string s{sv};
    #endif

    // we need to use static_cast to change 
    //string_view into a string

    printString(static_cast<std::string>(sv));
    //now we can convert string_view to std::string
    return 0;
}