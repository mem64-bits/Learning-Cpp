#include <iostream>

int getInput()
{
    std::cout << "Enter an integer number: ";
    int input {};
    std::cin >> input;
    return input;
}

int doubleNumber(int number)
{
    return number *2;
}

int main(){
    int num{getInput()};
    std::cout << "Double the number is " << doubleNumber(num);
    return 0;
}