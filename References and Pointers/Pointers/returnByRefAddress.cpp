#include <iostream>

std::string returnByValue(std::string text) // expensive
{
    return text;
}
std::string& returnByRef(std::string text)
{
    return text;
}

std::string* returnByAddress(std::string text){
    return *text;
}
int main()
{
     std::string text{"Hello, World!\n"};

    std::cout<<returnByValue(text);
    std::cout<<returnByRef(text);
    std::cout<<returnByAddress(text);
    return 0;
}