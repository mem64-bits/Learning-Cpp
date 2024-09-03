#include <iostream>
#include <string_view>

int main()
{
/*We don't need to understand how std::string_view* std::cout
or .length() work to use them because of the abstraction 
from using data hiding*/

    std::string_view sv{ "Hello, world!" };
    std::cout << sv.length();

    return 0;
}