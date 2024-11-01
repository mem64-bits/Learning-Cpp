#include <iostream>
#include <vector>

void printStack(std::vector<int>& stack){
    if(stack.empty())
        std::cout<<"(Stack: Empty)\n";

    for(auto i : stack){
        std::cout<<i<<' ';
    }
}

int main(){ 

    std::vector<int> stack {};

    if(stack.empty())
        std::cout<<"       (Stack: empty)\n";

    for(int i=1; i<=3; i++){
        stack.push_back(i);
        std::cout<<"Push "<<i<<" (Stack: ";
        printStack(stack);
        std::cout<<")\n";
    }

    stack.pop_back();
    std::cout<<"Pop"<<"    (Stack: ";
    printStack(stack);
    std::cout<<")\n";

    stack.push_back(4);
    std::cout<<"Push "<<4<<"  (Stack: ";
    printStack(stack);
    std::cout<<")\n";

    for(int j=1; j<=3; j++){
        stack.pop_back();
        std::cout<<"Pop "<<j<<"\t(Stack: ";
        printStack(stack);
        std::cout<<")\n";
    }

    return 0;
}