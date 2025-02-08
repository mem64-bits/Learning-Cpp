#include <iostream>
#include <vector>

/*To use std::vector with multiple different types
we can use template functions*/

template <typename T>
void passByRef(const std::vector<T>& arr)
{
    std::cout<<arr[0]<<'\n';
}

int main()
{
    std::vector primes{2, 3, 5, 7, 11}; // actually std::vector<int>
    passByRef(primes); // template takes in std::vector<int> as an arguement

    std::vector heights{1.74, 1.78, 1.82, 1.95, 2.10, 1.65}; // std::vector<double>
    passByRef(heights); // template takes in std::vector<doubles>
}