#include <string>
#include <iostream>

class Ball
{
public:

    // Constructor for ball class
    Ball(std::string_view colour, double radius)
    :m_colour{colour}, m_radius{radius}
    { 
        std::cout<<"Ball("<<colour<<", "<<radius<<")\n";
    }

private:
    std::string m_colour  {};
    double m_radius {};   
};

int main()
{
    Ball{"blue", 10.0};
    Ball{"red", 12.0};
    return 0;
}