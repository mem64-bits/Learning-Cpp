#include <iostream>

struct Employee
{   
    int id {};
    int age {};
    int wage{};
}


std::ostream& operator<< (std::ostream& out, const Employee& e )
{
    out<<"id: "<< e.id<<" age: " <<e.age<< " wage: " <<e.wage;
    return out;
}

int main()
{
    Employee joe {2,28};
    std::cout<<joe;
}