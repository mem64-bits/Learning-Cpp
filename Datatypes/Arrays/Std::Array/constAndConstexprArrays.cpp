#include <array>

/*std::array supports constexpr unlike std::vector

Best Practice
---------------

Define your std::array as constexpr whenever possible. 
If your std::array is not constexpr, consider using a std::vector instead.*/
int main(){
    const std::array<int,5> a {1,2,3,4,5}; // defines const std::array
    constexpr std::array<double,5> b {1.0,2.0,3.0,4.0,5.0}; // defines constexpr array
    return 0;
}