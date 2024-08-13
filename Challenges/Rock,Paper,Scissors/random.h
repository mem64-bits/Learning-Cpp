#ifndef RANDOM_H
#define RANDOM_H
#include <random>

namespace Random{

	std::random_device rd{};
	std::seed_seq ss{ rd(), rd(), rd(), rd(), rd(), rd(), rd(), rd() }; 
	std::mt19937 mt{ ss }; 
    
    std::mt19937 randomSelection(int min_range int max_range){
        mt = std::uniform_int_distribution{min_range,max_range};
        return mt;
    }
}

#endif