#include <iostream>
#include <vector>


/*How range based loops work

for (element_declaration : array_object)
   statement
*/
int main()
{
    std::vector nums{1, 2, 3 , 4, 5, 6, 7, 8, 9, 10};

    for(int num:nums)
    {   
        std::cout<<nums[num]<<' '<<'\n';

        if(nums[num] % 2 == 0)
        {
            std::cout<<"Even nums: [";
            std::cout<<nums[num]<<' ';
            std::cout<<']';
        }
    }
    return 0;
}