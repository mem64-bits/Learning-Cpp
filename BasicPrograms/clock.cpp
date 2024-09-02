#include <iostream>
#include <string>
#include <string_view>
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


class Time
{

private:
    int m_hours {};
    int m_minutes {};
    int m_secs {};

    
    enum TimeOfDay
    {
        AM,
        PM,
    };

     std::string_view timeOfDaytoStr(TimeOfDay m_time_of_day)
   {
        switch(m_time_of_day)
        {
            case TimeOfDay::AM : return "AM";
            case TimeOfDay::PM : return "PM";
            default:    return "???";
            return {};

        }
   }


public:

    enum TimeFormat
    {
        hr_12,
        hr_24,
    };


  
    void showTime(TimeFormat time_format=hr_24)
    {
        TimeOfDay time_of_day {};
        if (time_format == TimeFormat::hr_24)
        {

            if( (m_hours < 10) && (m_minutes < 10) && (m_secs < 10)) 
            {
               std::cout<<0<<m_hours<<":"<<0<<m_minutes<<":"<<0<<m_secs;
            } 


            else if(m_hours < 10)
            {
                std::cout<<0<<m_hours<<":"<<m_minutes<<":"<<m_secs;
            }

            else if(m_minutes < 10)
            {
                std::cout<<m_hours<<":"<<0<<m_minutes<<":"<<m_secs;
            }

            else if(m_secs < 10)
            {
                std::cout<<m_hours<<":"<<m_minutes<<":"<<0<<m_secs;
            }

            else if ( (m_minutes < 10) && (m_secs))
            {
                std::cout<<m_hours<<":"<<0<<m_minutes<<":"<<0<<m_secs;
            }

            else if ( (m_hours < 10) && (m_secs < 10))
            {
                std::cout<<m_hours<<":"<<0<<m_minutes<<":"<<0<<m_secs;
            }
 
            else
            {
                std::cout<<m_hours<<":"<<m_minutes<<":"<<m_secs;
            }
            
        }

      else  if (time_format ==  TimeFormat::hr_12)
        {   
            if(m_hours > 12)
            {
                time_of_day = PM;
                std::cout<<m_hours<<":"<<m_minutes<<":"<<m_secs<<' '<<timeOfDaytoStr(time_of_day);
            }

            else
            {
                time_of_day = AM;
                std::cout<<m_hours<<":"<<m_minutes<<":"<<m_secs<<' '<<timeOfDaytoStr(time_of_day);
            }
            
        }

    }

    void setTime(int hours, int minutes, int secs=0)
    {
        m_hours = hours;
        m_minutes =  minutes;
        m_secs = secs;
    }
};


int main()
{
    Date date{};
    date.getDateInput();
    date.printDate();

    Time time {};
    time.setTime(2,10);
    time.showTime(Time::hr_12);
    return 0;    

}