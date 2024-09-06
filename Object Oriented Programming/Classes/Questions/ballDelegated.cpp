#include <iostream>
#include <string>

class Ball
{
public:
    
    void print() const
    {
        std::cout<<"Ball("<<m_colour<<", "<<m_radius<<")\n";
    }

    

    Ball(std::string_view colour, double radius)
    :   m_colour{colour},
        m_radius{radius}
    {
        print();
    }
    
    Ball()
    :Ball("black",10)
    {   
    }

    Ball(std::string colour)
   : Ball(colour,10)
    {
    }

    Ball(double radius)
    : Ball("black",radius)
    {
    }
   



private:
    std::string m_colour {"black"};
    double m_radius {10};
};



int main()
{
    Ball def{};
    Ball blue{"blue"};
    Ball twenty{ 20.0 };
    Ball blueTwenty{"blue",20.0};

    return 0;
}