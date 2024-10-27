#include <vector>
#include <iostream>


void printStack(std::vector<int>& stack){
    if(stack.empty())
        std::cout<<"Empty";
    
    for(auto element : stack){
        std::cout<<element<<' ';
    }

    // \t is a tab character, to help align the text
	std::cout << "\tCapacity: " << stack.capacity() << "  Length " << stack.size() << "\n";

}
int main(){

    // creates a vector that can hold 10 elements
    std::vector<int>stack{};

    /*the push_back() member function puts in a new element
    /at the top of the stack 
    
    if there isn't enough space for the new element
    the vector the vector reallocates */
    
    printStack(stack);

    for(int i=1; i<10; i++){
        stack.push_back(i);
    }

    printStack(stack);
    return 0;
}