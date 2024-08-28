#include <iostream>

struct Date
{
    int year {};
    int month {};
    int day {};

    void print()  const
    {
        std::cout<<year<<'/'<<month<<'/'<<day<<'\n;';
    }


};

void doSomething(const Date& date)
{
    date.print();
}

int main()
{
    const Date today {2009,1,1};
    doSomething(today);
    return 0;
}