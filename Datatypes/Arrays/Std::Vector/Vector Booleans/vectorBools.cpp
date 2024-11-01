#include <iostream>
#include <vector>

int main(){
    /*vectors have a special function of making an array of booleans which is useful in a number of ways
     such as binary, but it doesn't have bit manipulation like std::bitset
     
     It also has a downside of requiring 40 bytes of overhead, and is diffren */

    std::vector<bool> bools{true,false,true,false,true,false}; //101010

    //prints out bools in intregal form
    for(int boolean : bools )
        std::cout<<boolean<<' '; 
    return 0;
}