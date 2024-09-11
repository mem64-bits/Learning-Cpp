#include <iostream>
#include <vector>

/*C++ doesn't do any checks to find out if 
an index is outside the range of the array

this can lead to errors*/
int main()
{
    std::vector prime{ 2, 3, 5, 7, 11 };

    std::cout << prime[3];  // print the value of element with index 3 (7)
    //prime[9] does not exist
    std::cout << prime[9]; // invalid index (undefined behavior)

    return 0;
}