#include <iostream>

namespace Messages::Greetings{
    void Hi(){
            std::cout<<"Hello There !";
        }
}

int main(){
    // changes namespace to shorten typing 
    namespace Print = Messages::Greetings;
    // Messages::Greetings::Hi(); is now Print::Hi();
    Print::Hi();// same as typing  Messages::Greetings::Hi();
    return  0;
}