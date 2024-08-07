#include <iostream>
// Lvalue References

/*
In C++, a reference is an alias for an existing object. 
Once a reference has been defined, any operation on the reference
 is applied to the object being referenced.
 */

int x {5}; // normal int variable

/*makes a reference 
that can be used as an alias to variable x*/

int& ref {x};

std::cout<<x<<'\n';
std::cout<<ref<<'\n';
