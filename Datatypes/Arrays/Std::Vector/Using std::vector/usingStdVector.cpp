#include <vector> // needed for std::vector

int main()
{
    // Uses list constructor
    std::vector<int> prime_nums{2,3,5,7};

// Uses CTAD C++17 to implicitly get type that vector contains
    std::vector vowels{'a','e','i','o','u'};
    return 0;
}