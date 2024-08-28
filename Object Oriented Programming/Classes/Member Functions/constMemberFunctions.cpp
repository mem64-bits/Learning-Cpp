#include <iostream>

struct Date
{
    int year {};
    int month {};
    int day {};

    void increaseDay()
    {
        ++day;
    }

    void print()
    {
        std::cout<<year<<'/'<<month<<'/'<<day<<'\n';
    }

// print() is now const and can be used with const structs
    void printConst() const
    {
        std::cout<<year<<'/'<<month<<'/'<<day<<'\n';
    }

};

int main()
{
    const Date today {2001,1,1}; // sets Struct to const (can't be changed)
    const Date& tomorrow {today.year,today.month,today.day+1};// error can't modify a const struct
#if 0
    today.increaseDay();
#endif

// error: Const struct can't call non-const member functions
    #if 0
    today.print();
    #endif

// Const member function works with const struct
    today.printConst();
    tomorrow.printConst();
    return 0;

}