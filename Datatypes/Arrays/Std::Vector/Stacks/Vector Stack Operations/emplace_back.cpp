#include <iostream>
#include <vector>

void printStack(std::vector<int>& stack){
    if(stack.empty())
        std::cout<<"Empty";
    
    for(auto element : stack){
        std::cout<<element<<' ';
    }

    // \t is a tab character, to help align the text
	std::cout << "\tCapacity: " << stack.capacity() << "  Length " << stack.size() << "\n";

}


/*emplace_back works similar to push_back and it adds an elemrnt to the end of 
 a vector but it can be more efficient in certain circumstances */

int main(){
/*Stack Behaviour doesn't work properly when we resize vectors*/
    std::vector<int>stack(10);
    printStack(stack);
    return 0;
}
