#include <iostream>
#include <string>

class Ball
{
public:
    Ball(std::string_view colour="Black", double radius=10)
    :   m_colour{colour},
        m_radius{radius}

    {
        std::cout<<"Ball("<<m_colour<<", "<<m_radius<<")\n";
    }

private:
    std::string m_colour {};
    double m_radius {};
    

};

int main()
{
    Ball def{};

    return 0;
}