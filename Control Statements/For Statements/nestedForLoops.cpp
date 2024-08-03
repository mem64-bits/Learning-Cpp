#include <iostream>
#include <string_view>


int main(){
    for (char chr{'a'}; chr < 'j'; ++chr){
        
        for(int i{1}; i <= 10; ++i){
            std::cout<<i<<'('<<chr<<')';
            std::cout<<'\n';
            ++chr;

        }
          
    }
    
    return 0;
}