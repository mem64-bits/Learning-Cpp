#include <iostream>


void fizz_buzz(int end_range){
    for (int i{0}; i <= end_range; ++i){
        if (i % 3 ==0){
            std::cout<<"fizz\n";
        }

        else if(i % 5 == 0){
            std::cout<<"buzz\n";
        }

        else {
            std::cout<<i<<'\n';
        }
    }   
}


int main(){
    fizz_buzz(15);
    return 0;
}