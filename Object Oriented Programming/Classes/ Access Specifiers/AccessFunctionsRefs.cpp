#include <iostream>
#include <string>

/*Takes two strings and determines 
which comes first alphabetically*/

// takes in string references 
const std::string& firstAlphabetical(const std::string& a, const std::string& b)
{
    return (a<b) ? a : b; // returns reference to string
}


int main()
{
    std::string hello{"Hello"};
    std::string world{"World"};

    std::cout<<firstAlphabetical(hello, world);
}