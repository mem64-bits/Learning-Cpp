#include <iostream>
#include <vector>


/*Resizing a vector to be  will increase the vector's length,
the capacity of the vector if required,

However decreasing the length of a vector only 
decreases the length of the vector

To help with this we can use the member function
shrink_to_fit()*/

void printCapLen(const std::vector<int>& v){
    std::cout<<"Capacity: "<<v.capacity()<<" Length: "<<
    v.size()<<'\n';
}

int main(){
    std::vector<int> v(1000); // allocate room for 1000 elements
    
    printCapLen(v);
    
    v.resize(0); // to resizes to 0 elements
    printCapLen(v);

// shrinks the capacity of the vector to fit the length
    v.shrink_to_fit();
    printCapLen(v);

    return 0;
}