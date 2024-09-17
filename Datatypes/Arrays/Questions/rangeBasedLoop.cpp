#include <iostream>
#include <string>
#include <vector>

template <typename T>
bool findArrElem(const std::vector<T>& arr, auto name)
{
    for(const auto& element : arr)
    {
        if(element == name )
            return true;
    } 
}

std::string_view getName()
{   
    std::string name{};
    std::cout<<"Enter a name: ";
    std::cin>>name;
    return name;
}

int main()
{
    std::vector<std::string> names {
        "Alex", "Betty", "Caroline", "Dave", 
        "Emily", "Fred", "Greg","Holly"};

    std::string_view name{ getName() };

    if(findArrElem(names, name))
        std::cout<<'\n'<<name<<" was found\n";
    
    else
        std::cout<<'\n'<<name<<" was found\n";
    


    return 0;
}