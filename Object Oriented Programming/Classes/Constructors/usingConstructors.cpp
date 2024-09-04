#include <iostream>

/*
Constructor Rules
-----------------

Constructors must have the same name as the class 
(with the same capitalization).For template classes, 
this name excludes the template parameters.

Constructors have no return type (not even void).

Because constructors are typically part of the 
interface for your class, they are usually public.

*/
class Foo
{
private:
    int m_x {};
    int m_y {};

public:
// makes a constructor function with two initilizers
    Foo(int x, int y);

    void print() const
    {
        std::cout<<"Foo("<<m_x<<','<<m_y<<")\n";
    }
};

int main()
{
    Foo foo{6,7}; // calls Foo(int,int) constructor function
    foo.print();
    return 0;
}