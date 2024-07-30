#include <iostream> // std::cin is held in here


int main(){
/*
    cin is used to get input from
    the user to be stored in a variable   
    extraction operator = used to get input '>>'
*/
// make variable to store user input
int age{};

// Ask user for input
std::cout << "What is your age:";

// gets input and stores it in age variable
std::cin >> age;
std::cout << "You entered:" << age << '\n';

// can get the input of two variables in one 
std::string firstname{}, lastname;
std::cout << "Give your first and lastname: ";
std::cin >> firstname >> lastname;
std::cout << "\nHello" << " " << firstname << " " << lastname << "\n";
    return 0;
}