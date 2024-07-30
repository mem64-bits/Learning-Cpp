#include <iostream>

// Structure of a function in C++
/*
returnType functionName() This is the function header (tells the compiler about the existence of the function)
{
     This is the function body (tells the compiler what the function does)
}
*/

void doSomething()
{
    std::cout << "Say something\n";
    // Definition of function main()
}

void repeatedFunction()
{
    std::cout << "\nIm a function being run twice in a row\n";
}


void doB()
{
    std::cout << "\nIn doB()\n";
}


void doA()
{
    std::cout << "Starting doA()\n";

// Functions can be called in any other function
    doB();                          

    std::cout << "Ending doA()\n";
}

int main()
{
    std::cout << "Starting main()\n";
    doSomething(); // Interrupt main() by making a function call to doPrint().  main() is the caller.
    
    std::cout << "Ending main()\n"; // this statement is executed after doPrint() ends

// Functions can be called more than once
    repeatedFunction();
    repeatedFunction();   

// Function doB(); is called in function doA():
doA();

// However you can't define a
// function in a function in C++
    return 0;
}
