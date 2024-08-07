#include <iostream>

int add(int x, int y ){
    return x+y;
}
/*Function overloading allows us to create 
multiple functions with the same name,
 so long as each identically named 
function has different parameter types */

double add(double x, double y){
    return x+y;
}

int main(){
std::cout<<add(7,5)<<'\n';
std::cout<<add(12.5,12.5);
return 0;
}