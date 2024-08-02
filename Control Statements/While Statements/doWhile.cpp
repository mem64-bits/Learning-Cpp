#include <iostream>

/*
A do while statement is a loop that works 
just like a while loop, except the statement 
always executes at least once. 

After the statement has been executed, 
the do-while loop checks the condition.

If the condition evaluates to true, the path of execution
jumps back to the top of the do-while loop and executes 
it again. */

int main(){
      // selection must be declared outside of the do-while-loop, so we can use it later
    int selection{};

    do
    {
        std::cout << "Please make a selection: \n";
        std::cout << "1) Addition\n";
        std::cout << "2) Subtraction\n";
        std::cout << "3) Multiplication\n";
        std::cout << "4) Division\n";
        std::cin >> selection;
    }
    while (selection < 1 || selection > 4);

    // do something with selection here
    // such as a switch statement

    std::cout << "You selected option #" << selection << '\n';

    return 0;
}