#include <iostream>
#include <random>
#include <chrono>
#include <iostream>

class Random
{
public:
    std::mt19937 generate()
    {
        std::random_device rd{};
        // Create seed_seq with high-res clock and 7 random numbers from std::random_device
		std::seed_seq ss{
			static_cast<std::seed_seq::result_type>(std::chrono::steady_clock::now().time_since_epoch().count()),
				rd(), rd(), rd(), rd(), rd(), rd(), rd() };

		return std::mt19937{ ss };
    }

    std::mt19937 getMt() const {return m_mt;}

    
    private:
        std::mt19937 m_mt{generate()};
};