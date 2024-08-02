#include <iostream>

void charCodePrinter(){
char letter{'a'};
    while(letter <= 'z'){
        int chr_code{static_cast<int>(letter)};
        std::cout<<letter<<" ASCII Code: "<<chr_code<<'\n';
        ++letter;
}
}

int main(){
    charCodePrinter();
    return 0;
}  