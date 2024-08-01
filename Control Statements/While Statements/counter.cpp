#include <iostream>


void counter(int printCount){
    int num{1};
    while(printCount>0){
        std::cout<<num<<'\n';
        ++num;
      --printCount;
    }
}

int main(){
    counter(10);
}