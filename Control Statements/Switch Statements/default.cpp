#include <iostream>

void printDigitName(int x)
{
    switch (x) // x is evaluated to produce value 5
    {
    case 1:
        std::cout << "One";
        return;
    case 2:
        std::cout << "Two";
        return;
    case 3:
        std::cout << "Three";
        return;
    default: // which does not match to any case labels
        std::cout << "Unknown Input"; // so execution starts here
        return; // and then we return to the caller
    }
}

int main()
{
    int num{};
    std::cout<<"Enter in a number: ";
    std::cin>>num;
    std::cout<<'\n';
    printDigitName(num);
    std::cout << '\n';
    return 0;
}