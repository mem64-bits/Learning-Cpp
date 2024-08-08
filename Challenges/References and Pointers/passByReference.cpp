#include <iostream>
#include <string>



/*
some objects like strings are expensive to pass
 through by value
 
*/
// passing by value 
void printMessage(std::string y){
    std::cout<<y<<'\n';
    // y is destroyed here.
}

/*
we can put a reference in the parameters of a 
function to avoid making an expensive copy 
of an object
*/
void print(std::string& text){
    std::cout<<text<<'\n';
}
int main(){
    std::string x{"Pass By Reference! :)"};
    printMessage("Passing by Value :(");

    // Function makes a reference of x to be passed into function
    print(x);
    return 0;
}