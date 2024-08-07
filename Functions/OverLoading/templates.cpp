#include <iostream>


template <typename T> // this is the template parameter declaration
T max(T x, T y) // this is the function template definition for max<T>
{
    return (x < y) ? y : x;
}
int main(){
    //instantiates and calls function max<int>(int, int)
    std::cout<<max<int>(4,7)<<'\n';

    // the compiler can deduce types automatically
    std::cout<<max(3,10)<<'\n';
    std::cout<<max(3.5,3.6);
    return 0;

}