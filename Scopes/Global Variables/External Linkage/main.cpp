#include <iostream>

extern const int g_y{};
int main(){
    std::cout<<"Using the value: "<<g_y<<" from extern.cpp";
    return 0;
}