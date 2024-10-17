#include <iostream>
#include <vector>

int main()
{
    std::vector hello{'h', 'e', 'l', 'l', 'o'};
    std::cout<<"This array has "<<std::size(hello)<<" elements\n";
    std::cout<<hello[1];
    std::cout<<hello.at(1);
    return 0;
}