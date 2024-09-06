#include <iostream>
/*Imagine having simple a function
that adds two numbers */

int add(int x, int y)
{
// creates a unnecessary temporary object
    int result{x+y};
    return result;
}

int fast_add(int x, int y)
{
    // we can just directly result value 
    return x+y;
}


int main()
{
    std::cout<<add(5,3)<<'\n';
    std::cout<<fast_add(5,3);
    return 0;
}

