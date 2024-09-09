#include <iostream>
#include <random>
#include <chrono>
#include <iostream>

class Random
{
private:
   static std::mt19937 generate()
    {
        std::random_device rd{};
        // Create seed_seq with high-res clock and 7 random numbers from std::random_device
		std::seed_seq ss{
			static_cast<std::seed_seq::result_type>(std::chrono::steady_clock::now().time_since_epoch().count()),
				rd(), rd(), rd(), rd(), rd(), rd(), rd() };

		return std::mt19937{ ss };
    }

    static std::mt19937 getMt() {return m_mt;}
    
    inline static std::mt19937 m_mt{generate()};

    public: 
    // Generate a random int between [min, max] (inclusive)
	static int get(int min, int max)
	{
		return std::uniform_int_distribution{min, max}(m_mt);
	}
};

int main()
{
    for(int count{1}; count <= 10; ++count)
    
        std::cout<<Random::get(1,6);
    
    std::cout<<'\n';

    return 0;
}