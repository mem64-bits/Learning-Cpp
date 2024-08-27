#include <iostream>
#include <string_view>

struct Date
{
    int year {};
    int month {};
    int day {};

    void print()
    {
        std::cout<<year<<'/'<<month<<'/'<<day;
    }

    void print(std::string_view prefix)
    {
        std::cout<<prefix<<year<<'/'<<month<<'/'<<day;
    }
};

int main()
{
    Date today{1996,12,25};
    today.print();
    std::cout<<'\n';
    today.print("Today's date is: ");
    return 0;

}