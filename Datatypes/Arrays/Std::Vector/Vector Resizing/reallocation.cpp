#include <iostream>
#include <vector>

int main(){
    std::vector<int>nums(1);
    nums.reserve(10);

    for(auto i :nums){
        for(std::size_t j=0; j<10000000; j++){
                nums.push_back(j);
                std::cout<<nums[j]<<'\n';  
            }

    }

    for(auto k : nums)
        std::cout<<k<<' ';
       
    return 0;
}