#include <vector>
#include <iostream>


void printStack(std::vector<int>& stack){
    if(stack.empty())
        std::cout<<"Empty";
    
    for(auto element : stack){
        std::cout<<element<<' ';
    }

    
}
int main(){

    // creates a vector that can hold 10 elements
    std::vector<int>stack(10);

    /*the push_back() member function puts in a new element
    /at the top of the stack*/
    
    for(int i=1; i<stack.size()-1; i++){
        stack.push_back(i);
    }
    
    
    return 0;
}