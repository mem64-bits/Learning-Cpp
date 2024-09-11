#include <iostream>
#include <vector>
/*Because of soem weird quirks the length gotten 
from std::size and .size is unsigned so we can't store 
the value in an int*.

Instead we can convert the length using static_cast*/

int main()
{
    std::vector primes {2, 3, 5, 7, 9, 11};
    

    return 0;
}

