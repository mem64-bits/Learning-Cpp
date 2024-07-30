#include <iostream>

int main(){
    int x{5};
    int y{4};
    int greater = ((x>y) ? x:y);
    std::cout<<greater;

    int a{10};
    int b{9};
    int subtract  { (12-a > b) ? a:b};
    std::cout<<subtract;
    return 0;
}