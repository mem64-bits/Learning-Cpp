#include <iostream>
#include <string>

// Delegate = Transfer responsibility
class Employee
{
private:
    std::string m_name {};
    int m_id {};

public:
// Constructor for employee
    Employee(std::string_view name)
    /*delegates initialization to 
    Employee(std::string_view, int) constructor*/
    :Employee{name,0} 
    {
    }

    Employee(std::string_view name, int id)
        :m_name{name}, m_id{id}
    {
        std::cout<<"Employee "<<m_name<<" Created\n";
    }


};


int main()
{
    Employee e1{"James"};
    Employee e2{"Dave", 42};
}