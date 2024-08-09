#include <iostream>

int main(){
    int x{5};
    int* ptr{&x};
    std::cout<<*ptr<<'\n';

    {
        int y{6};
        ptr = &y;
        std::cout<<ptr<<'\n';
    }

    std::cout<<*ptr;
    return 0;
}