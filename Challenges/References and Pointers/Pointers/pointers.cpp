#include <iostream>


int main(){
    int x{};
    int& y{x};
    std::cout<<&x<<'\n';
    std::cout<<&y<<'\n';

    return 0;
}