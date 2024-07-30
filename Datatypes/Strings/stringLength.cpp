#include <iostream>
#include <string>

int main(){
    std::string food{"Spaghetti"};
    std::string name{"Tory"};
    // use .length() attached to a variable 
    //to find the length of a string
    std::cout<<food<< " has "<<food.length()<<'\n';

    //  how to assign the length of astring to an int 
    int length { static_cast<int>(food.length())};
    
    // or  .size() (basically same thing)
    int str_length {static_cast<int>(food.size())};
    
    // C++20 method (std::ssize)
    int name_length {static_cast<int>(std::ssize(name))};
    std::cout<<food<<" has "<<name_length<<" characters";
    return 0;
}