#include <iostream>

/*Destructors are special functions that are
called when a non aggregrate is destroyed

They are mostly used on cleanup to do 
things like free memory

~ is used to make a destructor

1. The destructor must have the same name as the class, preceded by a tilde (~).
2. The destructor can not take arguments.
3. The destructor has no return type.

The compiler implicitly makes destructors implicitly 
so we don't have to make them unless there's things like 
clearing memory we need to do
*/
class Simple
{
private:
    int m_id {};

public:
    Simple(int id)
        : m_id { id }
    {
        std::cout << "Constructing Simple " << m_id << '\n';
    }

    ~Simple() // here's our destructor
    {
        std::cout << "Destructing Simple " << m_id << '\n';
    }

    int getID() const { return m_id; }
};

int main()
{
    // Allocate a Simple
    Simple simple1{ 1 };
    {
        Simple simple2{ 2 };
    } // simple2 dies here

    return 0;
} // simple1 dies here