#include <vector>
#include <iostream>


//prints capacity and length of array
void printCapLen(std::vector<int>& arr){
    std::cout<<"Capacity: "<<arr.capacity()<<" Length:"
    <<arr.size()<<'\n';
}

int main(){
    std::vector even_nums{2,4,6}; // length is initially 3 
    
    return 0;
}