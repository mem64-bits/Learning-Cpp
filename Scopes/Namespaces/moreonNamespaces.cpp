#include <iostream>


void print() // this print() lives in the global namespace
{
	std::cout << " there\n";
}

namespace Greetings{
    void print() // this print() lives in the global namespace
{
	std::cout << "Hello\n";
}
}

// using '::' without a namespace searches
// for the identifer in the global scope
int main(){
    Greetings::print();

    // calls print in global scope (same as calling print() )
    ::print();
    return 0;
}