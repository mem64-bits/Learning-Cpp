#include <iostream> 

class Date
{
public:
   
    int year{};
    int month{};
    int day{};

    void print()
    {
        std::cout<<year<<'/'<<month<<'/'<<day<<'\n';
    }
};


// non-member version of print
void non_member_print(Date& date)
{
     // member variables accessed using member selection operator (.)
    std::cout<<date.year<<'/'<<date.month<<'/'<<date.day<<'\n';
}

int main()
{
    Date today{24,8,27};
    today.day = 16;
    today.print();
    non_member_print(today);

    return 0;
}