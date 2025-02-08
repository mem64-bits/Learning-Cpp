#include <vector>
#include <iostream>

/*The capacity of an array is how much an array can hold
The length of an array is how much items an array currently has

This means that the length and capacity of an array isn't always 
the same*/

// prints capacity and length of array
void printCapLen(const std::vector<int>& arr){
    std::cout<<"Capacity: "<<arr.capacity()<<" Length:"
    <<arr.size()<<'\n';
}

int main(){
    std::vector even_nums{2,4,6}; // length is initially 3 
    printCapLen(even_nums); // the length and capacity of the array is the same in this case

    // uses for each loop to print elements in array
    for(auto i:even_nums)
        std::cout<<i<<' ';
    std::cout<<'\n';
    
    even_nums.resize(5); // increases to capacity of vector to 5
    printCapLen(even_nums);

    for(auto j:even_nums)
        std::cout<<j<<' ';
    std::cout<<'\n';


    

    return 0;
}