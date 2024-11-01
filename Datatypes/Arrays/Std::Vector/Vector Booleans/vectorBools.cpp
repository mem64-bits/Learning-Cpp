#include <iostream>
#include <vector>

int main(){
    //vectors have a special function of making an array of booleans which 
    std::vector<bool> bools{true,false,true,false,true};
    for(int boolean : bools ){
        if(boolean){
            std::cout<<"true "; 
        }

        else{
            std::cout<<"false ";
        }
    }
    return 0;
}