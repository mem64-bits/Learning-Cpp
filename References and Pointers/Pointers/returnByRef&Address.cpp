#include <iostream>

std::string returnByValue(std::string text) // expensive
{
    return text;
}
std::string& returnByRef(std::string& text)
{
    return &text;
}

std::string* returnByAddress(const std::string* text){
    return *text
}
int main()
{
    std::string text{"Hello, World!\n"}
    //returnByValue(text);
    //returnByRef(text);
    //returnByAddress(text);
    return 0;
}