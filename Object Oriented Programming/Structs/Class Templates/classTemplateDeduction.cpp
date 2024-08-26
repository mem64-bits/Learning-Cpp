#include <utility> // contains std::pair


// Class Arguement Deduction (CTAD)

/* From C++ 17 onwards the compiler can automatically
deduct the type of class template objects from the
 initializers*/

int main()
{
// explictily specify class template C++11 to before C++17)
    std::pair<int,int> p1{1,2};

// CTAD automatically gets the type of class template 
    std::pair p2{1,2};
    return 0;
}