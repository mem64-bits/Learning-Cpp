#include <iostream>

/*Local variables are variables
defined in a function body*/

// variables x and y are local 

int add(int x, int y) // x and y created and initialized here
{
    int z{ x + y };   // z is a local variable


    return z;         // z, y, and x destroyed here

/* The variables the time 
between its creation and destruction*/
}


int main(){
    std::cout << add(2,2);
    return 0;
}