#include <iostream>
#include <vector>

/*we need to state the type of vector we are using*
only can take in std::vectors holding ints*/

void passByRef(std::vector<int>& arr)
{
    std::cout<<arr[0]<<'\n';
}

int main()
{
    std::vector primes{2, 3, 5, 7, 9, 11};
    passByRef(primes);

    std::vector heights{1.74, 1.78, 1.82, 1.95, 2.10, 1.65};
// function can't take in std::vector<double> 
    #if 0
    passByRef(heights);
    #endif


    return 0;    
}