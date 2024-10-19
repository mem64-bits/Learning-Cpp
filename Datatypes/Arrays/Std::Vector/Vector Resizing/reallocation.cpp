#include <iostream>
#include <vector>

int main(){
    std::vector<int>nums(1);

    for(auto i :nums){
        for(std::size_t j=1; j<10; j++){
            nums.resize(j);
            nums.push_back(j);
            std::cout<<nums[j]<<'\n';
        }
    }

    for(auto k : nums)
        std::cout<<k<<' ';
       
    return 0;
}