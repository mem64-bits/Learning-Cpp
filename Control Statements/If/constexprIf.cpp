#include <iostream>

int main(){

    /*Since the value is always constant 
    the else statement will never execute
    This makes it wasteful to compile at runtime*/

    constexpr double gravity{ 9.8 };

#if 0
	// reminder: low-precision floating point literals of the same type can be tested for equality
	if (gravity == 9.8) // constant expression, always true
        
        // will always be executed
		std::cout << "Gravity is normal.\n";   
        // will never be executed
		std::cout << "We are not on Earth.\n"; // will never be executed
#endif

/*In C++17 onwards we can use constexpr if to evauluate the statement 
at compile time to optimise the code*/

    if constexpr (gravity == 9.8) // now using constexpr if
		std::cout << "Gravity is normal.\n";
	else
		std::cout << "We are not on Earth.\n";

	return 0;
}
