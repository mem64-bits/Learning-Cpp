#include "date.h"
#include <iostream>
/*We still need to declare these member functions
in the main code file, when defining them in a header file */
class Date
{
private:
    int m_year{};
    int m_month{};
    int m_day{};

public: 

    int getYear() const { return m_year; }
    int getMonth() const { return m_month; }
    int getDay() const  { return m_day; }

    Date(int year, int month, int day); // constructor declaration
    void print() const;
};

int main()
{
    Date date{30,3,1999};
    return 0;
}