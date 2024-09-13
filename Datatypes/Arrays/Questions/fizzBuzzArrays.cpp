#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include <sstream>

void fizzbuzz(int count)
{
    using namespace std::literals::string_view_literals;
    std::vector<int> divisors {3, 5, 7, 11, 13, 17, 19};

    std::vector<std::string_view> divisor_words {
        "fizz"sv, "buzz"sv, "pop"sv, "bang"sv,
        "jazz"sv, "pow"sv, "boom"sv
    };

    assert(divisors.size() == divisor_words.size() && "divisor array size does not match corresponding divisor words list") ;
    bool divisor_check{ false };

    for(int i{1}; i <=count; ++i)
    { 
        for(std::size_t j{0}; j < divisors.size(); ++j)
        {
            if(i % divisors[j]  == 0)
            {
                    divisor_check = true;
                    std::cout<<divisor_words[j];
            }

            if(!divisor_check)
              std::cout<<i<<'\n';
            
           std::cout<<'\n';
        }
    }
}



int main()
{
    fizzbuzz(150);
    
}