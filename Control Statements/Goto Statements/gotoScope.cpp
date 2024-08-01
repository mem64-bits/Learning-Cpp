#include <iostream>

/*Statement labels have a special scope 
called a function scope 

This means the label 
is visible throughoutthe function even before its point 
of declaration. 

This allows us to jump forward in the 
execution of the code */

void printFood(bool skip)
{
    if (skip)
        goto end; // jump forward; statement label 'end' is visible here due to it having function scope

    std::cout << "Pizza\n";
end:
    ; // statement labels must be associated with a statement
}

int main()
{
    printFood(true);  // jumps over the print statement and doesn't print anything
    printFood(false); // prints "Pizza"

    return 0;
}