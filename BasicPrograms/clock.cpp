#include <iostream>
#include <string>
#include <chrono>
#include <thread>


class Date
{
private:
    int m_day   {};
    int m_month {};
    int m_year  {};

public:
    void printDate()
    {
        if(m_day < 10 || m_month < 10)
            std::cout<<0<<m_day<<'/'<<0<<m_month<<'/'<<m_year<<'\n';

        else
            std::cout<<m_day<<'/'<<m_month<<'/'<<m_year<<'\n';
    }


    const int getDay() 
    {
        return  m_day;  
    }

    const int getMonth() 
    {
        return  m_month;  
    }

    const int getYear() 
    {
        return  m_year;  
    }

    const Date& getDate(const Date& date)
    {
        return date;
    }

    
    void setDate(int day,  int month, int year) 
    {
        m_day = day;
        m_month = month;
        m_year = year;
    }
    
};


int main()
{
    Date today{};
    today.setDate(01,04,2002);
    today.printDate();

}