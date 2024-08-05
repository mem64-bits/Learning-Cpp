#ifndef BALL_HEIGHT_H
#define BALL_HEIGHT_H
#include <iostream>


namespace Constants{
    inline constexpr double gravity { 9.8 };
}

namespace Ball{
   inline constexpr double calculateBallHeight(double towerHeight, int seconds){
        const double fallDistance { Constants::gravity * (seconds * seconds) / 2.0 };
        const double ballHeight { towerHeight - fallDistance };

        if (ballHeight < 0.0)
            return 0.0;

        return ballHeight;
   }

    void printBallHeight(double ballHeight, int seconds){
        if (ballHeight > 0.0)
            std::cout << "At " << seconds << " seconds, the ball is at height: " << ballHeight << " meters\n";
        else
            std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
    }

    void calculateAndPrintBallHeight(double towerHeight, int seconds){
        double ballHeight{ calculateBallHeight(towerHeight, seconds) };
        printBallHeight(ballHeight, seconds);
    }
}





#endif