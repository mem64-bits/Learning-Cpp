#include <iostream>
#include <vector>


/*Unlike other fixed array types like std::array and C-style arrays
 in C++ std::vector's array size doesn't need to known at it's 
 creation, and it can be changed. This is called a dynamic array*/

int main(){
    // std::vector can be resized by using the resize() function


    std::vector v{0,1,2};
    
    // resize array to 5
    v.resize(5);

    // prints size of array
    std::cout<<"The length is: "<<v.size();

    for(auto i : v){
        std::cout<<i<<' ';
    }
    std::cout<<'\n';
    return 0;
}