#include <iostream>


/*we can use static_cast to change
 the value of 1 type to another type*/

int main(){
    int x{97};
    char letter_a{static_cast<char>(x)};
    std::cout<<x<<'\n';
    std::cout<<letter_a;
    return 0;
}