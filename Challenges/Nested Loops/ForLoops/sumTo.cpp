#include <iostream>


int sumTo(int value){
    int result{};

    for (value; value > 0;)
    {
        result = value + (value-1);
    }
    
    return result;
}
 
int main(){
    std::cout<<sumTo(5);
    return 0;
}