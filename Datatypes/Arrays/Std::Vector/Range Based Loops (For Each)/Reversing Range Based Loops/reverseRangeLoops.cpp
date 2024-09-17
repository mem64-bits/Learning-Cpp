#include <iostream>
#include <ranges> // C++20
#include <string>
#include <vector>

int main()
{
    std::vector<std::string_view> words {
        "Alex", "Bobby", "Chad", "Dave"};

//  creates a reverse view 
    for(const auto& word : std::views::reverse(words))
    {

    }
    return 0;
}