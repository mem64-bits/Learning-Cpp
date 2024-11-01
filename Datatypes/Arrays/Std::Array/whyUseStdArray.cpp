#include <array> // for std::array
#include <vector>
#include <iostream>

/*std::arrays are fixed length arrays
and are not dynamic like std::vectors

Use std::array for constexpr arrays, 
and std::vector for non-constexpr arrays.*/

int main(){

    // How to initilize a std::array
    std::array<int,5> a {}; // creates empty array with capacity of 5
    
    //Vs Initilizing empty vector of capacity 5
    std::vector<int> b(5);
    return 0;
}