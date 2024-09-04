#include <iostream>

class Foo
{
public:
    Foo(int x, int y)
    {
        std::cout<<"Foo("<<x<<','<<y<<") constructed\n";
    }
};

int main()
{

    // converts 'a' to 97 and true to 1 
    Foo foo{ 'a', true }; // will match Foo(int, int) constructor

    return 0;
}