#include <iostream>
#include <vector>

int main()
{
                        /*this region
                        uses size_type 
                        under the hood
                        
                        size_type stores the
                        length and indices 
                        of the std containers*/
                        
    std::vector prime {2,3,5,7,11};
    //returns length as type size_type
    std::cout<<"length: "<<prime.size();

    /*(C++17) .size() member function is added
    to std namespace*/
    std::cout<<"\nlength: "<<std::size(prime);

    return 0;

}

