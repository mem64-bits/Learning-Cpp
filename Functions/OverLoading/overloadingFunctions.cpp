#include <iostream>

int add(int x, int y ){
    return x+y;
}

double add(double x, int y){
    return x+y;
}

int main(){
std::cout<<add(7,5)<<'\n';
std::cout<<add(12.5,12.5);
return 0;
}