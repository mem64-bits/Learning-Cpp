#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> words {"peter", "likes", "frozen", "yogurt"};

// BAD :(
// uses expensive copy of std::string
    for(auto word : words)
        std::cout<<word<<' ';
    
    std::cout<<'\n';


    /*When iterating through an expensive type like std:string
    use const auto in the range based loop*/

    for(const auto& word : words)
        std::cout<<word<<' ';
    std::cout<<'\n';

    /* if we need to modify the type use a reference (auto&) */

    for(auto& word : words)
        std::cout<<word<<' ';
    std::cout<<'\n';
    return 0;
}