#include <iostream>
#include <string>
#include <string_view>

class Person
{
// things under private access specifer can't be accessed directly outside of the class 
private:
    // m_name is private
    std::string m_name {};

public:
// kisses is a public function
    void kisses(Person& p)
    {   

 /*objects under public access specifer 
can still access private objects*/

        std::cout<<m_name<<" kisses "<<p.m_name<<'\n';
    }

    void setName(std::string_view name)
    {   
        // public function can modify value of private function
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