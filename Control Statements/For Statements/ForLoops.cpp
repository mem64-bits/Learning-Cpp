#include <iostream>
#include <string_view>

void repeatMsg(std::string_view msg, int echo, char end){
    
    for(int i{0}; i<echo; ++i){
        std::cout<<msg<<end;
    }
    
}
int main(){
    #if 0
    for (int i{1}; i < 10; ++i){
        std::cout<<"Hello World! \n";
    }
    #endif

    repeatMsg("This is a repeated message", 5, '\n');
    return 0;
}