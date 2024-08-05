#include <iostream>
#include "ballHeight.h"

double getTowerHeight()
{
	std::cout << "Enter the height of the tower in meters: ";
	double towerHeight{};
	std::cin >> towerHeight;
	return towerHeight;
}

int main()
{
	double towerHeight{ getTowerHeight() };
    
    for(int secs{1}; secs <= towerHeight; ++secs){
        Ball::calculateAndPrintBallHeight(towerHeight, secs);
    }

	return 0;
}