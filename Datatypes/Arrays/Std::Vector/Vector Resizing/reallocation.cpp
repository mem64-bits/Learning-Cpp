#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums;
    nums.reserve(1000000); // Reserve space for 10 elements

    for (std::size_t j = 0; j < 1000000; j++) {
        nums.push_back(j); // Add element j to the vector
        std::cout << nums[j] << '\n'; // Print the newly added element
    }

    // Print all elements in the vector
    for (auto k : nums)
        std::cout << k << ' ';
    
    return 0;
}
