#include <iostream>

int main(){
    int x{5};
    int* ptr{&x};

    if(ptr==nullptr){
        std::cout<<"ptr is null\n";
    }

    else{
        std::cout<<"ptr is not null\n";
    }

    int* nullPtr{};
    std::cout<<(nullPtr == nullptr ? "null": "non-null");
}