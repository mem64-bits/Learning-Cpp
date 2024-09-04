#include <string>
#include <iostream>

class Ball
{
public:
    Ball(std::string_view colour, double radius)
    :m_colour{colour} 

private:
    std::string m_colour  {};
    double m_radius {};   
};