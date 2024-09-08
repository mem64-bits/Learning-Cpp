#ifndef DATE_H
#define DATE_H
#include <iostream>

/*As classes get longer and more complicated,
having all the member functions defined in the class
gets complicated and harder to follow, so we can use header files
to put member functions in outside of their definition.

Member functions defined inside of classes are excluded from the ODR 
rule and don't need the inline key word in front of their definitions

Prefer defining class definitions in a header file
and member functions outside the class in a cpp file*/

class Date
{
private:
    int m_year{};
    int m_month{};
    int m_day{};

public:
    Date(int year, int month, int day);

    void print() const;

    int getYear() const { return m_year; }
    int getMonth() const { return m_month; }
    int getDay() const { return m_day; }
};

#endif