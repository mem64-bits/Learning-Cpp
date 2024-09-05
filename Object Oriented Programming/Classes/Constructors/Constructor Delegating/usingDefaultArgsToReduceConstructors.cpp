#include <iostream>
#include <string>

class Employee
{
private:
    std::string m_name {};
    int m_id {};

public:
    Employee(std::string_view name, int id = 0)
    :m_name{name},m_id{id}
    {
        std::cout<<"Employee "<<m_name<< " Created"<<"\n";
    }
};

int main()
{
    Employee e1{"John"};
    Employee e2{"Joe"};
    return 0;
}