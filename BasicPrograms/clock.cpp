#include <iostream>
#include <string>
#include <string_view>
#include <chrono>
#include <ctime>
#include <limits>
#include <iomanip> // For std::setw and std::setfill

namespace Input
{
    void ignoreLine()
    {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

class Date
{
private:
    int m_day{};
    int m_month{};
    int m_year{};

public:
    void printDate() const
    {
        std::cout << std::setw(2) << std::setfill('0') << m_day << '/'
                  << std::setw(2) << std::setfill('0') << m_month << '/'
                  << m_year << '\n';
    }

    int getDay() const { return m_day; }
    int getMonth() const { return m_month; }
    int getYear() const { return m_year; }

    void setDate(int day, int month, int year)
    {
        m_day = day;
        m_month = month;
        m_year = year;
    }

    void getDateInput()
    {
        std::cout << "Enter a day: ";
        std::cin >> m_day;
        Input::ignoreLine();

        std::cout << "Enter a month: ";
        std::cin >> m_month;
        Input::ignoreLine();

        std::cout << "Enter a year: ";
        std::cin >> m_year;
        Input::ignoreLine();
    }
};

class Time
{
private:
    int m_hours{};
    int m_minutes{};
    int m_secs{};

    enum class TimeOfDay
    {
        AM,
        PM
    };

    constexpr std::string_view timeOfDaytoStr(TimeOfDay time_of_day) const
    {
        return (time_of_day == TimeOfDay::AM) ? "AM" : "PM";
    }

public:
    enum class TimeFormat
    {
        hr_12,
        hr_24
    };

    void printTime(TimeFormat time_format = TimeFormat::hr_24) const
    {
        if (time_format == TimeFormat::hr_24)
        {
            std::cout << std::setw(2) << std::setfill('0') << m_hours << ":"
                      << std::setw(2) << std::setfill('0') << m_minutes << ":"
                      << std::setw(2) << std::setfill('0') << m_secs << '\n';
        }
        else if (time_format == TimeFormat::hr_12)
        {
            TimeOfDay time_of_day = (m_hours >= 12) ? TimeOfDay::PM : TimeOfDay::AM;
            int display_hours = m_hours % 12;
            if (display_hours == 0)
                display_hours = 12; // Handle 12 AM/PM correctly

            std::cout << std::setw(2) << std::setfill('0') << display_hours << ":"
                      << std::setw(2) << std::setfill('0') << m_minutes << ":"
                      << std::setw(2) << std::setfill('0') << m_secs << ' '
                      << timeOfDaytoStr(time_of_day) << '\n';
        }
    }

    void setTime(int hours, int minutes, int secs = 0)
    {
        m_hours = hours;
        m_minutes = minutes;
        m_secs = secs;
    }

    void getCurrentTime()
    {
   
    auto now = std::chrono::system_clock::now();
    std::time_t currentTime = std::chrono::system_clock::to_time_t(now);
    std::tm localTime = *std::localtime(&currentTime);


    int m_hours = localTime.tm_hour;
    int m_minutes = localTime.tm_min;
    int m_secs = localTime.tm_sec;

    }

     void displayCurrentTime(TimeFormat time_format = TimeFormat::hr_24, Time& time)
    {
        while(true)
        {
           time.getCurrentTime();
           time.printTime();
        }
    }


};




int main()
{
    Date date;
    date.getDateInput();
    date.printDate();

    Time time{};
    //time.printTime(Time::TimeFormat::hr_24);
    //time.printTime(Time::TimeFormat::hr_12); */
    time.displayCurrentTime(Time::TimeFormat::hr_24, time);

    return 0;
}
