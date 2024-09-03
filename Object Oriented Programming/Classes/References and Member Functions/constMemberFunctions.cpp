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
    Date tomorrow {2001,1,2};
    
// error can't modify a const struct
#if 0
    today.increaseDay();
#endif

// error: Const struct can't call non-const member functions
    #if 0
    today.print();
    #endif

// const member functions can be used with const structs
    today.printConst();

// const member functions can be used with non const functions
    tomorrow.printConst();
    return 0;
}
