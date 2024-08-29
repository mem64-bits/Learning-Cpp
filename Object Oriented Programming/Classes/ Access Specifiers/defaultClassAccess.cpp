#include <iostream>

// Classes are private by default
// use m_ prefix for naming private class members 

class Date // Now a class instead of a struct
{
    int m_year {};
    int m_month {};
    int m_day {};

    void print() const // private by default
    {   // private members can be accessed in member functions
        std::cout<<m_year<<'/'<<m_month<<'/'<<m_day<<'\n';
    }
};

int main()
{
// Error: can no longer use aggregate initilisation
#if 0 
    Date today {2020,10,14};
    return 0;
#endif

// private members can not be accessed by the public
#if 0
    today.m_day = 16; // compile error: the m_day member is private
    today.print();    // compile error: the print() member function is private
#endif

return 0;
}


