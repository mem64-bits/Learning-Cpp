#include <iostream>

/*can use the auto keyword in C++ 20
as a way to  shorten down writing 
function templates */ 

auto max(auto x, auto y){
    return (x < y) ? y:x;
}

/*
Same as writing 

    template <typename T, typename U>
    auto max(T x, U y)
    {
        return (x < y) ? y : x;
    }
    */
int main(){
    std::cout<<max(4.5,5);
    return 0;
}