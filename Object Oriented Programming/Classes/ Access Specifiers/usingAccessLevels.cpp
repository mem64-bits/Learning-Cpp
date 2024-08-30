#include <iostream>
#include <string>
#include <string_view>

class Person
{
// things under private access specifer can't be accessed directly outside of the class 
private:
    std::string m_name {};

public:
    void kisses(Person& p)
    {
        std::cout<<m_name<<" kisses "<<p.m_name<<'\n';
    }

    void setName(std::string_view name)
    {
        m_name = name;
    }
};



int main()
{
    Person joe;
    joe.setName("Joe");

    Person kate;
    kate.setName("Kate");

    joe.kisses(kate);

}