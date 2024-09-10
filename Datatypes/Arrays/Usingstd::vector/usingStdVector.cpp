#include <vector> // needed for std::vector
#include <iostream>
int main()
{
    // Uses list constructor
    std::vector<int> prime_nums{2,3,5,7};

// Uses CTAD C++17 to implicitly get type that vector contains
    std::vector vowels{'a','e','i','o','u'};

    std::cout<<'[';
    for(int chars=0; chars < sizeof(vowels); ++chars)
    {
        std::cout<<vowels[chars];

    }
    std::cout<<']';
    return 0;
}