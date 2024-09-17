#include <iostream>
#include <string>
#include <vector>

template <typename T, typename U>
bool findArrElem(const std::vector<T>& arr, U key)
{
    for(const auto& element : arr)
    {
        if(element == key )
            return true;
    } 

    return {};
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
        std::cout<<'\n'<<name<<" was not found\n";
    


    return 0;
}