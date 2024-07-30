#include <iostream>

// When you don't need a function to return a value 
// we use the void keyword 
void getNum()
{
    std::cout << "Enter a number: ";
    int input {};
    std::cin >> input;
// function can't be used to return value 
}

// To return a value in a function a function indentifer
// is put in front of the function to return data of a specific data type 
// e.g int 

int getValFromUser()
{  std::cout << "Enter a number: ";
    int input {};
    std::cin >> input;
    return input;
}

// A return type Function has to return a value 
// otherwise undefined behaviour will happen

int getValueFromUserUB() // this function returns an integer value
{
 	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	// note: no return statement
}

int main()
{
    int num {getValFromUser()};
    std::cout << "doubled is " << num*2 << '\n';
    
// Undefined dunction will 
// get warning from modern compilers

//    int undefined_num{ getValueFromUserUB()};
//    std::cout << "Huh what's this value who knows: " << undefined_num;
    return 0;
}