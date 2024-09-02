#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <limits>

namespace Input
{
    void ignoreLine()
    {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    }

}



class Date
{
private:
    int m_day   {};
    int m_month {};
    int m_year  {};

public:
    void printDate()
    {
        if( (m_day < 10 ) && (m_month < 10) )
            std::cout<<0<<m_day<<'/'<<0<<m_month<<'/'<<m_year<<'\n';
        
        else if(m_day < 10)
            std::cout<<0<<m_day<<'/'<<m_month<<'/'<<m_year<<'\n';
        
        else if(m_month < 10)
            std::cout<<m_day<<'/'<<0<<m_month<<'/'<<m_year<<'\n';
        
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

     const Date& getDateInput() 
    {
       static Date date{};
          
        std::cout<<"Enter in a day: ";
        std::cin>>m_day;
        Input::ignoreLine();
            
        std::cout<<"\nEnter in a month: ";
        std::cin>>m_month;
        Input::ignoreLine();
           

        std::cout<<"\nEnter in a year: ";
        std::cin>>m_year;
        Input::ignoreLine();

        date.setDate(m_day, m_month, m_year);
        return date;

    }

    
};


int main()
{
    Date date{};
    date.getDateInput();
    date.printDate();
    return 0;    

}