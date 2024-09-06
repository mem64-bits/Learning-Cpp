#include <iostream>
#include <string>

class Ball
{
public:
    
    void print() const
    {
        std::cout<<"Ball("<<m_colour<<", "<<m_radius<<")\n";
    }

    Ball()
    {
    }

    Ball(std::string_view colour, double radius)
    :   m_colour{colour},
        m_radius{radius}
    {
        print();
    }

    Ball(std::string colour): m_colour{colour}
    {
        print();
    }

    Ball(double radius):m_radius{radius}
    {
        print();
    }
   



private:
    std::string m_colour {"Black"};
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