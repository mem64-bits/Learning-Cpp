#include <iostream>
#include <vector>

constexpr void printStack(const std::vector<int>& stack){
    if(stack.empty())
        std::cout<<"(Stack: Empty)\n";

    for(auto i : stack){
        std::cout<<i<<' ';
    }
}

void printAndPopStack(std::vector<int>& stack, int pop_count=0){
    if(pop_count == 0){
        stack.pop_back();
        std::cout<<"Pop "<<"(Stack: ";
        printStack(stack);            
        std::cout<<")\n";
    }

    else{
        stack.pop_back();
        std::cout<<"Pop "<<pop_count<<" (Stack: ";
        printStack(stack);            
        std::cout<<")\n";
    }
}       

void printAndPushStack(std::vector<int>& stack, int push_num=0){
    if(push_num == 0){
        stack.push_back(push_num);
        std::cout<<"Push "<<" (Stack: ";
        printStack(stack);
        std::cout<<")\n";
    }
    else{
        stack.push_back(push_num);
        std::cout<<"Push "<<push_num<<" (Stack: ";
        printStack(stack);
        std::cout<<")\n";
    }
    
}

int main(){ 

    std::vector<int> stack {};
    std::cout<<'\t';
    printStack(stack);
    
    printAndPushStack(stack,1);
    printAndPushStack(stack,2);
    printAndPushStack(stack,3);
    
    printAndPopStack(stack);
    printAndPushStack(stack,4);

    printAndPopStack(stack,1);
    printAndPopStack(stack,2);
    printAndPopStack(stack,3);
    return 0;
}