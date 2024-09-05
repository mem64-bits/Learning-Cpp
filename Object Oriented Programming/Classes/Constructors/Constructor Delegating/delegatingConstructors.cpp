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
//--------------------------
// Delegating constructor
    Employee(std::string_view name)
    /*delegates initialization to 
    Employee(std::string_view, int) constructor*/
    :Employee{name,0} 
    {
    }

    // We need seperate functions for delegating and initilization
    Employee(std::string_view name, int id)
        :m_name{name}, m_id{id}
    {
        std::cout<<"Employee "<<m_name<<" Created\n";
    }

};


int main()
{
    Employee e1{"James"}; // name = "James" and id = 0
    Employee e2{"Dave", 42};
}

/*
Downsides to delegating
    Can sometimes make copies of initilizers

    If a delegated function delegates to a another delegated function 
    it will cause an infinite loop filling memory and causing 
    the program to crash.
*/