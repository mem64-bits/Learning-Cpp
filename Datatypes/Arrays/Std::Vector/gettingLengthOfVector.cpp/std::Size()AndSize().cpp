#include <iostream>
#include <vector>

int main()
{
                        /*this region
                        uses size type 
                        under the hood*/
    std::vector prime {2,3,5,7,11};
    //prints length of array as an int
    std::cout<<"length: "<<prime.size();
}

