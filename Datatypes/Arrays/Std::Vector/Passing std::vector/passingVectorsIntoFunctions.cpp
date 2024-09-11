#include <iostream>
#include <vector>


void passByRef(std::vector<int>& arr)
{
    std::cout<<arr[0]<<'\n';
}

int main()
{
    std::vector primes{2, 3, 5, 7, 9, 11};
    passByRef(primes);
    return 0;    
}