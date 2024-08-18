#include "screen.h"
#include <random>
#include <numeric>

struct Vec3
{
    float x,y,z;
};

void rotate(Vec3& point, float x=1, float y=1, float z=1)
{
    float rad{0};

    rad = x;
    point.y = std::cos(rad) * point.y - std::sin(rad) * point.z;
    point.z = std::sin(rad) * point.y + std::cos(rad) * point.z;

    rad = y;
    point.x = std::cos(rad) * point.x + std::sin(rad) * point.z;
    point.y = -std::sin(rad) * point.x + std::cos(rad) * point.z;

    rad = z;
    point.x = std::cos(rad) * point.x - std::sin(rad) * point.y;
    point.y = std::sin(rad) * point.x + std::cos(rad) * point.y;
    



}

void line(Screen& screen, float x1, float y1, float x2, float y2)
{
    float dx {x2 -x1};
    float dy {y2-y1};
    float length {std::sqrt(dx * dx + dy * dy)};
    float angle {std::atan2(dy,dx)};

    for(float i = 0; i < length; i++ )
    {
        screen.pixel(
                        x1 + std::cos(angle) * i,
                        y1 + std::sin(angle) * i
        );
    }
}

int main()
{
    Screen screen;

    

    while(true)
    {
        screen.show();
        screen.input();
    }

    return 0;
}