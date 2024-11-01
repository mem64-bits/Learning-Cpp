#include <array>

int main(){
    /*if we want to use a variable for the length 
    of the std::array it must be constexpr*/

    std::array<int, 7> a {}; // Using a literal constant
    constexpr int len {5};
    std::array<int,len> b{}; // using constexpr variable 

    //We can also use enums, which are implicitly constexpr
    enum Colors
    {
        red,
        green,
        blue,
        max_colors
    };

    std::array<int, max_colors> c {}; // Using an enumerator

    /*Warning arrays can also have a length of 0 which is a special 
    condition meaning the array stores no data*/

    std::array<int,0> d {};//array can't store values at length 0
    //use .empty() member function to check of empty arrays
    return 0;
}