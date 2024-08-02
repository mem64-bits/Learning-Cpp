#include <iostream>


int main(){
    char letter{96};
    while(letter >=96 && letter <= 122){
        int chr_code{static_cast<int>(letter)};
        std::cout<<letter<<" ASCII Code: "<<chr_code<<'\n';
    }
    return 0;
}  