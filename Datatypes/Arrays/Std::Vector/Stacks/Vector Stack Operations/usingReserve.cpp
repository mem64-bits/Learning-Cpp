#include <vector>
#include <iostream>

/*
    we can use the reserve member function to change the 
    capacity of the vector without changing the length of the vector
*/

void printStack(const std::vector<int>& stack)
{
	if (stack.empty()) // if stack.size == 0
		std::cout << "Empty";

	for (auto element : stack)
		std::cout << element << ' ';

	// \t is a tab character, to help align the text
	std::cout << "\tCapacity: " << stack.capacity() << "  Length " << stack.size() << "\n";
}

int main(){
    std::vector<int>stack{};
    printStack(stack);
    stack.reserve(10);
    printStack(stack);
    return 0;
}