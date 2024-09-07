#include <iostream>
#include <string>


class Employee
{
private:
    std::string m_name{};

public:
    Employee(std::string_view name)
    : m_name{name}
    {
    }

    const std::string& getName(){return m_name;}
};

void printEmployee(Employee e)
{
    std::cout<<e.getName();
}

int main()
{
    using namespace std::literals;
    printEmployee("Joe"sv); // converts string literal to std::string_view
    return 0;
}