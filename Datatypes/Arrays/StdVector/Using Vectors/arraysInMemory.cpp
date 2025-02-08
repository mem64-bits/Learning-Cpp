#include <iostream>
#include <vector>
/*In memory arrays are next to each other*/
int main()
{
    std::vector primes { 2, 3, 5, 7, 11 }; // hold the first 5 prime numbers (as int)

    std::cout << "An int is " << sizeof(int) << " bytes\n";

    // Arrays are always the same distance away from each other in memory
    std::cout <<"The Memory address of primes[0] is: "<< &(primes[0]) << '\n'; //prints memory address of primes at specified index
    std::cout <<"The Memory address of primes[1] is: "<< &(primes[1]) << '\n';
    std::cout <<"The Memory address of primes[2] is: "<< &(primes[2]) << '\n';

    return 0;
}