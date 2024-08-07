#include <iostream>

int add(int x, int y)
{
return x+y;
}

// automatically converts type to int
auto sub(auto x, auto y)
{
    /* return types must be the same type 
    as deduced by auto otherwise an error
     will happen*/

    return x-y;
}
int main(){
    int x{add(5,16)};
    auto y{sub(7,3)};

    std::cout<<x<<'\n';
    std::cout<<y<<'\n';

    return 0;
}
