#include <iostream>
#include "SimpleCalculator.h"

int main(){
    int num{0};
    int result {0};
    std::cout << "Enter in a number you want to find the factorial of: ";
    std::cin >> num;
    result = factorial(num);
    std::cout<<"\n"<<result;
    return 0;
}