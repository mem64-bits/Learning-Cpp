#include <iostream> 

class Date
{
public:
   
    int year{};
    int month{};
    int day{};

    void print()
    {
        std::cout<<year<<'/'<<month<<'/'<<day;
    }
};

int main()
{
    Date today{24,8,27};
    today.day = 16;
    today.print();
    return 0;
}