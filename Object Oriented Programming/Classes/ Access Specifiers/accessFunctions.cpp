#include <iostream>

/* An access function is a trivial public
 member function whose job is to retrieve 
 or change the value of a private member variable.
 
 
 They can be split into to groups called getters and setters*/



class Date
{
private:

   int m_year {};
   int m_month {};
   int m_day {};

public: 

// getter for year
    int getYear() const
    {
        return m_year;
    } 

//  setter for year
    void setYear(int year)
    {
        m_year = year;
    }

// getter for month
    int getMonth() const
    {
        return m_month;
    }

//   setter for month
    void setMonth(int month) 
    {
        m_month = month;
    }

//  getter for day
    int getDay() const
    {
        return m_day;
    }

// setter for day 
    void setDay(int day)
    {    
        m_day = day;
    }

    // Can also be done with function overloading
    void day(int day)
    {
        m_day = day;
    }

    int day()
    {
        return m_day;
    }
};




int main()
{
    Date d{};
    d.setYear(2021);// uses setter to modify private member
    std::cout<<"The year is "<<d.getYear(); // uses getter to access value
    return 0;
}