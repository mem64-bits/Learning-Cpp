#include <iostream>


int main(){
    char letter{'a'};
    while(letter <= 'z'){
        int chr_code{static_cast<int>(letter)};
        std::cout<<letter<<" ASCII Code: "<<chr_code<<'\n';
        ++letter;
    }
    return 0;
}  