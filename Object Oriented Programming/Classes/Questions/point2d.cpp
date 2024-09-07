#include <iostream>


class Point2d
{
private:
    double m_x{0.0};
    double m_y{0.0};

public:
    double getPointX() const {return m_x;}
    double getPointY() const {return m_y;}

    void print() const
    {
        std::cout<<"Point2d("<<getPointX()<<", "<<getPointY()<<")\n";
    }

    Point2d(double x, double y)
    : m_x{x}, m_y{y}
    {
        print();
    }

    Point2d(): 
    Point2d(0.0,0.0)
    {
    }
    
};

 int main()
{
    Point2d first{};
    Point2d second{ 3.0, 4.0 };

    // Point2d third{ 4.0 }; // should error if uncommented

    first.print();
    second.print();

    return 0;
} 