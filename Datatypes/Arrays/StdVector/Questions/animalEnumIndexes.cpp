#include <vector>
#include <cassert>
#include <iostream>

namespace Animals{
    enum Animals{
        chicken,
        dog,
        cat,
        elephant,
        duck,
        snake,
        max_animals
    };
}

int main(){
    const std::vector<int> legs{2,4,4,4,2,0};
    assert(std::size(legs) == Animals::max_animals);
    std::cout<<"An elephant has "<<legs[Animals::elephant]<< " legs.\n";
    
    return 0;
}