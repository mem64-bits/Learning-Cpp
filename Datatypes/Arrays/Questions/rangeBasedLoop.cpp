#include <iostream>
#include <string>
#include <vector>


int main()
{
    std::vector<std::string_view> names {
        "Alex", "Betty", "Caroline", "Dave", 
        "Emily", "Fred", "Greg","Holly"};

    std::cout << "Enter a name: ";
    std::string username{};
    std::cin >> username;

    bool found_name{false};

    for(std::string_view name : names)
    {
        if(name == username )
        {
            found_name = true;
            break;
        }
    }


    if (found_name)
        std::cout << username << " was found.\n";
    else
        std::cout << username << " was not found.\n";

    return 0;
}