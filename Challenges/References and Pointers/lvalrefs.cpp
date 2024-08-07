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
int main(){
int& ref {x};

std::cout<<x<<'\n';// prints x
std::cout<<ref<<'\n';// prints ref, is the same value as x
std::cout<<'\n';

x = 6; // changes x to 6
std::cout<<x<<'\n'; //prints x
std::cout<<ref<<'\n'; // ref also changes
std::cout<<'\n';

ref = 7;// changing the reference also changes x
std::cout<<x<<'\n'; //prints x
std::cout<<ref<<'\n'; // ref also changes
std::cout<<'\n';

return 0;
}
