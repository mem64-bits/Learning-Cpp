#include <array>

/*std::array allows for CTAD, meaning we don't have to 
explicitly include to type in the definition of the array*/

int main(){
    std::array a {1.2,1.3,4.6,7.8,4.6}; // decudes type to std::array<double,5> 
    std::array b {1,2,3,4,5}; // deduces type to std::array<int,5>
    return 0;
}