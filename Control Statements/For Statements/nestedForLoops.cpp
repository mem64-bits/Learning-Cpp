#include <iostream>
#include <string_view>


int main(){
    for(int i{1}; i <=10; ++i){
        std::cout<<i;

        for (char chr{'a'}; chr < 'j'; ++chr){
           std::cout<<'('<<chr<<')'<<'\n';
        }
       

    }
    
    return 0;
}