#include <vector>
#include <iostream>


//prints capacity and length of array
void printCapLen(std::vector<int>& arr){
    std::cout<<"Capacity: "<<arr.capacity()<<" Length:"
    <<arr.size()<<'\n';
}

int main(){
    std::vector even_nums{2,4,6}; // length is initially 3 
    printCapLen(even_nums); // the length and capacity of the array is the same in this case

    // uses for each loop to print elements in array
    for(auto i:even_nums){
        std::cout<<i<<' ';
    }

    even_nums.resize(5); // increases to capacity of vector to 5
    printCapLen(even_nums);

    for(auto j:even_nums){
        std::cout<<j<<' ';
    }

    return 0;
}