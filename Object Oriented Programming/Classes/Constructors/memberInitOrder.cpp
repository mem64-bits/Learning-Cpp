#include <algorithm> // std::max
#include <iostream>

class Foo
{
private:
    int m_x {};
    int m_y {};

public:
/* member list initilizer must be defined
in order of class object definition 
or undefined behaviour can happen*/

    Foo(int x, int y)
    : m_y{ std::max(x,y) }, m_x {m_y}
    {    
    }

    void print() const
    {
        std::cout<<"Foo("<<m_x<<','<<m_y<<")\n";
    }

};

int main()
{
//undefu=ined behaviour
    Foo foo{6,7};
    foo.print();
    return 0;
}