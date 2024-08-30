#include <iostream>

class Point3D
{
private:
    int m_x {};
    int m_y {};
    int m_z {};

public:
    void print()
    {
        std::cout<<'<'<<m_x<<", "<<m_y<<", "<<m_z<<'>';
    }

    void setValues(int x,int y,int z)
    {
        m_x = x;
        m_y  = y;
        m_z = z;
    }
};

int main()
{
    Point3D point;
    point.setValues(1,2,3);
    point.print();
    std::cout<<'\n';

    return 0;
}