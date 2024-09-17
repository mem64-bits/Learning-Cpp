#include <iostream>
#include <vector>

/* 
     How range based loops work

    for (element_declaration : array_object)
    statement

    Prefer using range based  loops for iterating through containers

    Range-based for loops do not provide a direct way to get the 
    array index of the current element. 

    Range-based for loops only iterate in forwards order. in
    by default in C++20 theres ways around this.
*/
int main()
{
    std::vector nums{1, 2, 3 , 4, 5, 6, 7, 8, 9, 10};

    std::cout<<"Even nums: [";

    for(int num:nums)
    {   
        if(nums[num] % 2 == 0)
        {    
            std::cout<<nums[num];
            std::cout<<", ";
        
        }    

        else if(num == std::ssize(nums)-1)
        {
           std::cout<<nums[num];
        }
    }

    std::cout<<']';
    return 0;
}