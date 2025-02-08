#include <iostream>
#include <vector>

int main(){
    /*vectors have a special function of making an array of booleans which is useful in a number of ways
     such as binary, but it doesn't have bit manipulation like std::bitset
     
     It also has a downside of requiring 40 bytes of overhead, and can work differently on
     other platforms.

    values do not need to be next o each other in memory and it isn't considered a container in C++
    As a result its often not compatabile with code in standard lib C++

    Avoid using std::vector<bool> 
    use constexpr std::bitset, std::vector<char>, or 3rd party 
    dynamic bitsets over std::vector<bool>.
    */

    std::vector<bool> bools{true,false,true,false,true,false}; //101010

    //prints out bools in intregal form
    for(int boolean : bools )
        std::cout<<boolean<<' '; 
    return 0;
}