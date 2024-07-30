#include <iostream>
#include <cstdint> // fast and least stored in here
int main(){

    /*To fix the downsides of 
    fixed integers we can use 
    fast and least integers
    
    these are guaranteed to be defined
    */

   /*
   The fast types (std::int_fast#_t and std::uint_fast#_t) 
   provide the fastest signed/unsigned integer type with a 
   width of at least # bits (where # = 8, 16, 32, or 64). 
   For example, std::int_fast32_t will give you the 
   fastest signed integer type that’s at least 32 bits.*/

   /*
   The least types (std::int_least#_t and std::uint_least#_t) provide the smallest 
   signed/unsigned integer type with a width of at least 
   # bits (where # = 8, 16, 32, or 64). For example, 
   std::uint_least32_t will give you the smallest 
   unsigned integer type that’s at least 32 bits.*/

    std::cout << "least 8:  " << sizeof(std::int_least8_t) * 8 << " bits\n";
	std::cout << "least 16: " << sizeof(std::int_least16_t) * 8 << " bits\n";
	std::cout << "least 32: " << sizeof(std::int_least32_t) * 8 << " bits\n";
	std::cout << '\n';
	std::cout << "fast 8:  " << sizeof(std::int_fast8_t) * 8 << " bits\n";
	std::cout << "fast 16: " << sizeof(std::int_fast16_t) * 8 << " bits\n";
	std::cout << "fast 32: " << sizeof(std::int_fast32_t) * 8 << " bits\n";

	return 0;
}