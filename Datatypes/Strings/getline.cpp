#include <iostream>
#include <string>


int main(){
    
    //std::cin can't get charatchers after whitespace
    #if 0
    std::cout<<"Enter your full name: ";
    std::string name{}; 
    std::cin>>name;
    std::cout<<"Enter in your favourite food: ";
    std::string food{};
    std::cin>> food;
    std::cout<<"Your name is "<<name<<
    " And your favourite food is "<<food<<'\n';
    #endif

    std::string fullname{};
    // allows for whitespace between letters
    // std::ws tells cin to ignore whitespace
    std::cout <<"Enter in your full name: ";
    std::getline(std::cin>>std::ws,fullname);
    std::cout<<"\nYour full name is "<<fullname;
    return 0;
} 