#include <iostream>
#include <vector>

/* 
     How range based loops work

    for (element_declaration : array_object)
    statement

    Prefer using range based  loops for iterating through containers
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

        if(num == std::ssize(nums)-1)
        {
           std::cout<<nums[num];
        }
    }

    std::cout<<']';
    return 0;
}