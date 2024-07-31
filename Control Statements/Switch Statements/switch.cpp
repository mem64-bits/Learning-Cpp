#include <iostream>

/*Switch statements 
help to simplify long if else chains*/

void printDigitName(int x){
    switch (x)
    {
        case 1:
        std::cout<<"One"<<'\n';
        return;

        case 2:
            std::cout<<"Two"<<'\n';
            return;

        case 3:
            std::cout<<"Three"<<'\n';
            return;

        case 4:
            std::cout<<"Four"<<'\n';
            return;
    }
}

int main(){
    printDigitName(1);
    printDigitName(2);
    printDigitName(3);
    printDigitName(4);
return 0;
}