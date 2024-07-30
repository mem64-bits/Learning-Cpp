#include <iostream>
#include <cstdint> // Contains fixed width variables 


/*
NAME                TYPE            RANGE
---------------------------------------------

std::int8_t	    1 byte signed	-128 to 127	Treated like a signed char on many systems. See note below.
std::uint8_t	1 byte unsigned	0 to 255	Treated like an unsigned char on many systems. See note below.

std::int16_t	2 byte signed	-32,768 to 32,767	
std::uint16_t	2 byte unsigned	0 to 65,535	

std::int32_t	4 byte signed	-2,147,483,648 to 2,147,483,647	
std::uint32_t	4 byte unsigned	0 to 4,294,967,295	

std::int64_t	8 byte signed	-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807	
std::uint64_t	8 byte unsigned	0 to 18,446,744,073,709,551,615	
*/

/*
    Downsides

    First, the fixed-width integers are 
    not guaranteed to be defined on all 
    architectures. 
    
    Your program will fail to compile on any such architecture that does not support a fixed-width 
    integer that your program is using. 
*/

int main(){
std::int8_t fixed_short{16};
std::cout <<"I am " << fixed_short << "years old";
return 0;
}