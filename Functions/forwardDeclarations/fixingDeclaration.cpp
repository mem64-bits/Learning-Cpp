#include <iostream>
/*
Method 1 Reorder function so 
it's declared before being used


int add(int x, int y)
{
    return x + y;
}

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';
    return 0;
}
*/


// Method 2

/*forward declaration: allows us to tell the compiler about the existence of an identifier before 
actually defining the identifier.*/

/*To solve the problem we can use a function declaration before we 
call and define the function*/

int add(int x, int y); // forward declaration of add() (using a function declaration)

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n'; // this works because we forward declared add() above
    return 0;
}

int add(int x, int y) // even though the body of add() isn't defined until here
{
    return x + y;
}

/*forward declarations are used to tell the compiler about the existence of some function that has been defined 
in a different code file.*/