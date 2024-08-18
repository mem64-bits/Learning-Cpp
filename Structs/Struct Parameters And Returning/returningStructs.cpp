#include <iostream>

struct Point3d
{
    double x { 0.0 };
    double y { 0.0 };
    double z { 0.0 };
};

Point3d getZeroPoint()
{
// We can create a variable and return the variable 
    return Point3d { 0.0, 0.0, 0.0 };   
//  return {0.0, 0.0, 0.0}; we don't need to specify the type 
//  because the type is deduced in the declaration of the function
}

int main()
{
    Point3d zero{ getZeroPoint() };

    if (zero.x == 0.0 && zero.y == 0.0 && zero.z == 0.0)
        std::cout << "The point is zero\n";
    else
        std::cout << "The point is not zero\n";

    return 0;
}