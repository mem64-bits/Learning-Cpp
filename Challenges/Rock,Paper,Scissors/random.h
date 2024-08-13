#ifndef RANDOM_H
#define RANDOM_H
#include <random>

namespace Random{

	std::random_device rd{};
	std::seed_seq ss{ rd(), rd(), rd(), rd(), rd(), rd(), rd(), rd() }; 
	std::mt19937 mt{ ss }; 
    
    int randomSelection(int min_range=1, int max_range=6){
        Random::mt = std::uniform_int_distribution(min_range,max_range);
        
        return mt;
    }
}

#endif