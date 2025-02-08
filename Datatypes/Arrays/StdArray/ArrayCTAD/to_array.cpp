#include <array>// for std::to_array

/*we can partially deduce arrays by using std::to_array in C++20
The downside is that std::to array is more expensive tha creating a std::array*/

int main(){
    constexpr auto myArray1 { std::to_array<int, 5>({ 9, 7, 5, 3, 1 }) }; // Specify type and size
    constexpr auto myArray2 { std::to_array<int>({ 9, 7, 5, 3, 1 }) };    // Specify type only, deduce size
    constexpr auto myArray3 { std::to_array({ 9, 7, 5, 3, 1 }) };         // Deduce type and size
    return 0;
}