#include <iostream>


int calculate(int x, char oper, int y ){

    switch(oper)
    {
        case '+':
            return x+y;
        case '-':
            return x-y;
        case 'x':
            return x*y;
        case '%':
            return x%y;
        case '/':
            return x/y;
        default:
            std::cout<<"Error: Invalid Operator";
            return 0;
    }

}

int main(){
    std::cout<<calculate(5,'+',5)<<'\n';
    std::cout<<calculate(7,'-',4)<<'\n';
    std::cout<<calculate(10,'x',3)<<'\n';
    std::cout<<calculate(10,'/',2)<<'\n';
    std::cout<<calculate(10,'b',10)<<'\n';
    return 0;
}