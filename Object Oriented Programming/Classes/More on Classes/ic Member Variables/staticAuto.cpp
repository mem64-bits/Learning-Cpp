#include <iostream>
#include <utility> // std::pair<T,U>

/*Only static members may use
 type deduction (auto and CTAD)*/

#include <utility> // for std::pair<T, U>

class Foo
{
private:
    #if 0
    auto m_x { 5 };           // auto not allowed for non-static members
    std::pair m_v { 1, 2.3 }; // CTAD not allowed for non-static members
    #endif
    
    static inline auto s_x { 5 };           // auto allowed for static members
    static inline std::pair s_v { 1, 2.3 }; // CTAD allowed for static members

public:
    Foo() {};
};

int main()
{
    Foo foo{};

    return 0;
}