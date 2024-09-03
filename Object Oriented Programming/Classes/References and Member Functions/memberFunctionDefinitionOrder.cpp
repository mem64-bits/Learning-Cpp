/* 
you can access member variables and member functions before 
they are declared. 

This means you can define member variables
 and member functions in any order you like!
*/

struct Foo
{
    int z() { return m_data; } // We can access data members before they are defined
    int x() { return y(); }    // We can can access member functions before they are defined

    int m_data { y() };        // This even works in default member initializers (see warning below)
    int y() { return 5; }
};

// This is how the compiler sees the struct foo
struct FooCompilerVer
{
    int z(); // forward declaration of Foo::z()
    int x(); // forward declaration of Foo::x()
    int y(); // forward declaration of Foo::y()

    int m_data{};
};

int FooCompilerVer::z() { return m_data; } // m_data already declared above
int FooCompilerVer::x() { return y(); }    // y already declared above
int FooCompilerVer::y() { return 5; }

/*
    Data members are initialized in order of declaration. 
    If the initialization of a data member accesses another 
    data member that isn’t declared until later 

    (and thus hasn’t been initialized yet), 
    the initialization will result in undefined behavior.

*/
struct Bad
{
    int m_bad1 { m_data }; // undefined behavior: m_bad1 initialized before m_data
    int m_bad2 { fcn() };  // undefined behavior: m_bad2 initialized before m_data (accessed through fcn())

    int m_data { 5 };
    int fcn() { return m_data; }
};