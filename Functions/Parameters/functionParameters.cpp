#include <iostream>


/* A Parameter is a variable 
   used in the header of a function */

void printNum(int x)
{
    std::cout << x << '\n';
    
}

int add(int x, int y)
{
    return x + y;
}

// An argument is a value that is passed from the caller to the function 
// when a function call is made

int main(){

// 6 is the the argument passed to the function
    printNum(6); 

/* arguments give values of 5 and 3
to x and y parameters */
    std::cout << add(5,3); 

    return 0;
}