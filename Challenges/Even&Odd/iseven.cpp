#include <iostream>

constexpr bool isEven(int x){
    bool isEven{};
    return (x % 2)== 0;
}


int main(){
    std::cout<<"Enter an integer: ";
    int num{};
    std::cin>>num;

    if(isEven(num)){
    std::cout<<num<<" is even";
    }

    else{
        std::cout<<num<<" is odd";
    }

    return 0;
}

