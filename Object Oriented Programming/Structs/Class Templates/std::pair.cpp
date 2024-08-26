#include <iostream>
#include <utility>



/*Using pairs in C++ is so common that its included in the 
standard library as a class template called std::pair
(<utilty> header file)*/

template <typename T, typename U>

// Uses std::pair instead of class template
// Prefer using std::pair to making class templates 
// for the pair types

void print(std::pair<T,U> p)
{
    std::cout<<'['<<p.first<<' '<<p.second<<']';
}

int main()
{
// .first member  will be int type and .second member will be double 
    std::pair<int,double> p1{3,5.5}; // pair holding int and double 
    std::pair<double,int> p2{7.2,3}; // pair holding double and double
    std::pair<int, int> p3{8,9};     // pair holding int and int 
    return 0;
}