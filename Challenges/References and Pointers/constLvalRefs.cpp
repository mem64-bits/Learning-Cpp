
int main()
{
    const int x { 5 };    // x is a non-modifiable lvalue
    
//  Illegal 
//  int& ref {x}.

// the const keyword has to
// be used when making a const reference

    const int& ref { x }; // okay: ref is a an lvalue reference to a const value

// the value of a const still can't 
//be changed through a reference

    return 0;
}