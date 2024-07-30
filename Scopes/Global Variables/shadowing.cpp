#include <iostream>

/*Each block defines its own scope region. 
So what happens when we have a variable 
inside a nested block that has the same name 
as a variable in an outer block? When this happens, 
the nested variable “hides” the outer variable in 
areas where they are both in scope. 
This is called name hiding or shadowing.*/

int main()
{ // outer block
    int apples { 5 }; // here's the outer block apples

    { // nested block
        // apples refers to outer block apples here
        std::cout << apples << '\n'; // print value of outer block apples

        int apples{ 0 }; // define apples in the scope of the nested block

        // apples now refers to the nested block apples
        // the outer block apples is temporarily hidden

        apples = 10; // this assigns value 10 to nested block apples, not outer block apples

        std::cout << apples << '\n'; // print value of nested block apples
    } // nested block apples destroyed


    std::cout << apples << '\n'; // prints value of outer block apples

    return 0;
} // outer block apples destroyed