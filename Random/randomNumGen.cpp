#include <iostream>
#include <random>

/* One good way to generate random numbers 
is to use the mersenne twister*/

//mt19937 is a 32 bit random num
//mt19937_64 is a 64 bit random number

std::mt19937 rand_num_32{};
int main(){
    
    for(int i{0}; i < 40; ++i){
        std::cout<<(rand_num_32)<<'\t';
        
        if(i % 5==0){
            std::cout<<'\n';
        }
    }
    return 0;
}

