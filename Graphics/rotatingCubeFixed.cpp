#include "screen.h"
#include <random>
#include <numeric>
#include <cmath>

struct Vec3
{
    float x, y, z;

    // Rotate the point around the X-axis
    void rotateX(float angle) {
        float rad = angle;
        float newY = std::cos(rad) * y - std::sin(rad) * z;
        float newZ = std::sin(rad) * y + std::cos(rad) * z;
        y = newY;
        z = newZ;
    }

    // Rotate the point around the Y-axis
    void rotateY(float angle) {
        float rad = angle;
        float newX = std::cos(rad) * x + std::sin(rad) * z;
        float newZ = -std::sin(rad) * x + std::cos(rad) * z;
        x = newX;
        z = newZ;
    }

    // Rotate the point around the Z-axis
    void rotateZ(float angle) {
        float rad = angle;
        float newX = std::cos(rad) * x - std::sin(rad) * y;
        float newY = std::sin(rad) * x + std::cos(rad) * y;
        x = newX;
        y = newY;
    }

    // Rotate around all three axes
    void rotate(float angleX, float angleY, float angleZ) {
        rotateX(angleX);
        rotateY(angleY);
        rotateZ(angleZ);
    }
};


