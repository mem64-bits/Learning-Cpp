#include <iostream>
#include <cmath>

int main(){
    int bin_num{};
    int dec_num {};
    int exponent {0};

    std::cin>>bin_num;

    while(bin_num > 0){
        int bin_digit = bin_num % 10;
        bin_digit /= 10;
        
        if(bin_digit == 1){
            dec_num += bin_digit * std::pow(2,exponent);
            exponent++;
        }

        else if(bin_digit == 0){
            exponent++;
        }

        else{
            std::cout<<"Not a valid binary number\n";
            break;
        }
        
    }  
    return 0;
}