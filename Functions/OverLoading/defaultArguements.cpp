#include <iostream>
#include <unistd.h>

void print(int x, int y=10) // 10 is the default argument
{
    std::cout << "x: " << x << '\n';
    std::cout << "y: " << y << '\n';
}

/*if no value is given to y
when the function is called 
y will be = 10*/

int main(){
    print(1,2);
    print(7);
    return 0;
}


