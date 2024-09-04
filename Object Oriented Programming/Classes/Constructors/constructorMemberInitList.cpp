#include <iostream>

class Foo
{
private:
    int m_x {};
    int m_y {};

public:
/*To have a constructor initialize members,
 we do so using a member initializer list */

// This is the member initialization list
    Foo(int x, int y)
    : m_x{x}, 
      m_y{y}
      
    {
        std::cout << "Foo(" << x << ", " << y 
        << ") constructed\n";
    }

    void print() const
    {
       std::cout << "Foo(" << m_x << ", " << m_y << ")\n";
    }
};


int main()
{
// Construtor modifies values of private members using the member initialization list
    Foo foo{6,7};
    foo.print();
}