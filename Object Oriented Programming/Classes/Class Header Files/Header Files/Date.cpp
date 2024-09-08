#include "Date.h"


/*This is how we define member functions 
written outside the main class definition */


// defines constructor outside of class
inline Date::Date(int year, int month, int day)
:m_year{year}
,m_month{month}
,m_day{day}
{
}

// return type has to be put first
inline void Date::print() const
{
    std::cout<<"Date("<<m_year<<'/'<<m_month<<'/'<<m_year
    <<")\n";
}
