#include <iostream> // library for input/output (i/o)
// std::cout is in this library

int main(){
/*
'<<' = insertion operator 

cout can print out text,
numbers and the value of variables
*/

// Example of Text
std::cout<<"Hello, World\n"; 

// Numbers
std::cout<<3<<"\n";

// Variables

double height{6.5};
std::cout<<height<<"\n";

// the insertion operator can link 
// multiple pieces to be printed together

std::cout<<"Pizza"<<"Time\n";
// Example 2 

double age{16};
std::cout<<"I am:"<<age;
return 0;
}
