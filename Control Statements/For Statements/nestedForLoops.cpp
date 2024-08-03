#include <iostream>
#include <string_view>


int main(){
    for(int i{1}; i <=10; ++i)
    {
        for (char chr{'a'}; chr < 'j'; ++chr)
        {
           std::cout<<'('<<chr<<')';
        }
    }
    
    return 0;
}