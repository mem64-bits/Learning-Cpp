#include <iostream>
#include <string> // adds in std::string and related functions

int main(){
    char c_name[5] ="Tory";
    std::string cpp_name {"Tory"};
    std::cout<<"This is my name in c: " <<c_name<<'\n';
    std::cout<<"This is my name in cpp: "<<cpp_name;
    return 0;
}