#include <iostream>

void printNum(int x){
    std::cout<<x<<'\n';
}

void printNum(double x){
    std::cout<<x<<'\n';
}
int main(){
    printNum(10);
    printNum(10.5);
    return 0;
}