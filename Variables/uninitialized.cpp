# include <iostream>

/*
Uninitialized variable: A variable that hasn't been 
given a value yet.

If you use a uninitialized variable you will get unpredictable 
results because the value of the variable could be anything
stored at that memory address
*/

// e.g


int main()
{
    // define an integer variable named x
    int x; // this variable is uninitialized because we haven't given it a value

    // print the value of x to the screen
    std::cout << x << '\n'; // who knows what we'll get, because x is uninitialized
    std::cout << sizeof(int) << '\n';
    return 0;
}

// This is an example of undefined behavior
