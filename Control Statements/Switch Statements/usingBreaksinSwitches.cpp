#include <iostream>

/* The downside to using return to stop the execution of 
switches is that it exits put of the whole function 
instead of just exiting the switch statement*/
    

void printDigitName(int x)
{
    switch (x) // x evaluates to 3
    {
    case 1:
        std::cout << "One";
        break;
    case 2:
        std::cout << "Two";
        break;
    case 3:
        std::cout << "Three"; // execution starts here
        break; // jump to the end of the switch block
    default:
        std::cout << "Unknown";
        break;
    }

    // execution continues here
    std::cout << "\nDidn't exit the function after the switch statement";
}

int main()
{
    printDigitName(3);
    std::cout << '\n';

    return 0;
}
