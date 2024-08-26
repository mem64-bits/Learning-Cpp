#include <iostream>


/*
Classes and structs are similar
m_ prefix is often used in naming members 
variables of a class
*/

// Changed struct example to class
class Date
{   
//  This is an access specifier
 public:
    int m_day {};// added m_ prefix
    int m_month {};
    int m_year {};

};

void printDate(Date& date)
{
    std::cout<<date.m_day<<'/'<<date.m_month<<date.m_year;
}

int main()
{
    Date birthday{27,8,24};
    printDate(birthday);
}