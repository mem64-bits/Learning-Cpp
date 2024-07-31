#include <iostream>

// This is long, inefficient and can make code less readable
void printCounter(int x){
    if(x==1){
        std::cout<<"One";
    }

    else if(x==2){
        std::cout<<"Two";
    }

    else if(x==3){
        std::cout<<"Three";
    }
    
    else if(x==4){
        std::cout<<"Four";
    }
    
}

int main(){
    printCounter(4);
}