#include <iostream>
#include <string>

class Employee
{
private:
    std::string m_name {};

public:
    void setName(std::string_view name) {m_name = name;}
/* auto is used to deduce type of m_name to
avoid making a std::string_view copy*/

    const auto& getName() const {return m_name;}
};



int main()
{ 
    Employee joe {};
    joe.setName("Joe");
    std::cout<<joe.getName();
    return 0;
}