#include <iostream>

/*We can use print statements to 
determine when functions are 
being called in a program to temp debug */

// use std::cerr instead of cout as it's unbuffered
// (sent to output immidiately)

int start(){
    std::cout << "start function called\n";
    return 4;
}

int main(){
    std::cerr << "main() function is called \n";
    std::cerr << "calling start function \n";
    std::cout << start();
    std::cerr << "\nending program.....";
    return 0;

}