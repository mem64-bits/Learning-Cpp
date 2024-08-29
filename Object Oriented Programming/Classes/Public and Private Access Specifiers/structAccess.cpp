#include <iostream>

/*
Public members are members of a class type 
that do not have any restrictions on how they can be 
accessed

Structs have public access by default.
*/

struct Date

{
    int year {}; // public by default
    int month {}; // public by default
    int day {}; // public by default

    void print()
    {
    // public members can be accessed in memeber functions
    // of the class type
    std::cout<<year<<'/'<<month<<'/'<<day<<'\n';

    }
};

int main()
{
// initilize Date Struct
    Date today {1999,4,30};

// public members accessible 
    today.day = 16;

// print() function is public
    today.print();
    return 0;

}
