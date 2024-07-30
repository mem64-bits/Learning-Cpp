#include <iostream>

int main()
{
    /*If an unsigned value is out of range, it is divided 
    by one greater than the largest number of the type, 
    and only the remainder kept.*/

    unsigned short x{ 65535 }; // largest 16-bit unsigned value possible
    std::cout << "x was: " << x << '\n';

    x = 65536; // 65536 is out of our range, so we get modulo wrap-around
    std::cout << "x is now: " << x << '\n';

    x = 65537; // 65537 is out of our range, so we get modulo wrap-around
    std::cout << "x is now: " << x << '\n';

    return 0;
}

// Avoid using unsigned integers 
// as they can easily overflow 
// causing undefined behaviour 