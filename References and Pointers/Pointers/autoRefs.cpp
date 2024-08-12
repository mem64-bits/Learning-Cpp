#include <string>

// Type deduction drops references

/*In addition to dropping const/constexpr qualifiers, 
type deduction will also drop references:*/

std::string& getRef(); // some function that returns a reference

int main()
{
// type deduced as std::string (not std::string&) 
    auto ref { getRef() }; 

// Top-level const and low-level const

/*A top-level const is a const qualifier that 
applies to an object itself. */

    const int x;    // this const applies to x, so it is top-level
int* const ptr; // this const applies to ptr, so it is top-level

/*If the initializer is a reference to const (or constexpr), 
the reference is dropped first (and then reapplied if applicable), 
and then any top-level const or constexpr is dropped from the 
result.*/
    return 0;
}
