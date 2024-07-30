#include <iostream> // headers declared in file cout is used in 

/*Using forward declaration we can 
access functions put in diffrent files*/

int add(int x, int y); 

int main(){
    std::cout << "4 plus 3 is: " << add(4,3);
    return 0;
}