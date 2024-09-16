#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> words {"peter", "likes", "frozen", "yogurt"};

// uses expensive copy of std::string
    for(auto word : words)
        std::cout<<word<<' ';
    
    std::cout<<'\n';

}