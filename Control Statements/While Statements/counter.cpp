#include <iostream>


void counter(int printCount){
    int num{1};

    if(num > 0)
        std::cout<<"Function parameter printCount must be positive";
    
    while(printCount>0){
        std::cout<<num<<'\n';
        ++num;
        --printCount;
    
    }
}

int main(){
    counter(10);
}