#include <iostream>


namespace Messages{
    namespace Greetings
    {
        void Hi(){
            std::cout<<"Hello There !";
        }
    } 
    
}

// C++17 style

#if 0
namespace Messages::Greetings{
    void Hi(){
            std::cout<<"Hello There !";
        }
}
#endif


int main(){
    Messages::Greetings::Hi();
    return  0;
}