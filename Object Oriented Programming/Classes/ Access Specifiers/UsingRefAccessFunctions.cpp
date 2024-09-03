#include <iostream>
#include <string>


class Employee

{
private:
    std::string m_name {};

public:
// function sets value of m_name with reference to name
    void setName(std::string_view name) {m_name = name;}

// returns reference to m_name
    const std::string& getName() const {return m_name;}

};

int main()
{
    Employee joe{}; 
    joe.setName("Joe");

    std::cout<<joe.getName(); // returns joe.m_name by reference

}