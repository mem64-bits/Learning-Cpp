#include <iostream>
#include <random>

/*we can use std::random::device to seed
Mersenne twister */

int main(){
std::mt19937 mt{std::random_device{}()};
std::uniform_int_distribution<>die6{1,6};


for (int i{1}; i <= 40; ++i){
    std::cout<<die6(mt);
    
    if(i % 5 ==0){
        std::cout<<'\n';
    }

    return 0;
}
}
