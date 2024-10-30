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
    
    push_back() and emplace_back() increase the vectors length by 1,
    if there isn't enough space for the new element, the
    vector the vector reallocates memory to fit in the new elements
    */
    
    printStack(stack); // prints Empty stack

// for loop adds in nums 1-10 to stack
    for(int i=1; i<=10; i++){
        stack.push_back(i);
    }
    printStack(stack);

    //.back() gets the top element of the array
    std::cout<<"Top Element: "<<stack.back();
    std::cout<<'\n';

    std::cout<<"Popping Elements\n";
    //pop_back() removes top element in the stack

    for(int i=0; i<10; i++){
        stack.pop_back(); // removes elements from array decrements length of array
        printStack(stack);
    }

   
    return 0;
}