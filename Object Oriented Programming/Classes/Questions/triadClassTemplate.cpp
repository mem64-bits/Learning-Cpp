#include <iostream>
#include <string>

template <typename T,T,T>
class Triad
{
private:
    T m_first{};
    T m_second{};
    T m_third{};

public:
    Triad(T first, T second, T third)
    : m_first{first}
    , m_second{second}
    , m_third{third}
    {
    }

    T getFirstTraid() const{return m_first;}
    T getSecondTraid() const{return m_second;}
    T getThirdTraid() const{return m_third;}

    void print()
    {
        std::cout<<'['<<m_first<<", "<<m_second<<", "<<m_third<<"]"
    }

};