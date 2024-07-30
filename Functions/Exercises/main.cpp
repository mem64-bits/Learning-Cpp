#include <iostream>

int readNumber(){
    std::cout <<"Enter in a integer: ";
    int num{};
    std::cin >> num;
    return num;
}


void writeAnswer(int x){
    std::cout <<"\nthe answer is " <<x;

}

int main(){
    int x {readNumber()};
    int y {readNumber()};
    writeAnswer(x+y);
    return 0;
}