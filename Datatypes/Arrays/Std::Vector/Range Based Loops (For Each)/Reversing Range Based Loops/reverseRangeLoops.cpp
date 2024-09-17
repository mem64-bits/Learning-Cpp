#include <iostream>
#include <ranges> // C++20
#include <string>
#include <vector>

/*
    Range-based for loops only iterate in forwards order. in
    by default in C++20 theres ways around this by using 
    the function std::views::reverse
    
    It works by changing the way the array is viewed
    so the loop is technicially moving forwards but 
    has the effect of working the same way as iterating 
    backwards
*/

int main()
{
    // alphabetically sorted
    std::vector<std::string_view> words {
        "Alex", "Bobby", "Chad", "Dave"};

//  creates a reverse view of the array words
    for(const auto& word : std::views::reverse(words))
        std::cout<<word<<' ';

    std::cout<<'\n';

    return 0;
}