#include <iostream>


void printDigitName(int x){
    switch (x)
    {
        case 1:
        std::cout<<"One"<<'\n';

        case 2:
            std::cout<<"Two"<<'\n';

        case 3:
            std::cout<<"Three"<<'\n';

        case 4:
            std::cout<<"Four"<<'\n';
    }
}

int main(){
    printDigitName(1);
    printDigitName(2);
    printDigitName(3);
    printDigitName(4);
return 0;
}