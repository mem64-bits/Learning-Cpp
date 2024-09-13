#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include <sstream>


    



int main()
{
    using namespace std::literals::string_view_literals;
    std::vector<int> divisors {3, 5, 7, 11, 13, 17, 19};

    std::vector<std::string_view> divisor_words {
        "fizz"sv, "buzz"sv, "pop"sv, "bang"sv,
        "jazz"sv, "pow"sv, "boom"sv
    };

    assert(divisors.size() == divisor_words.size() && "divisor array size does not match corresponding divisor words list") ;

    std::vector<bool>divisor_checks(7);
      
    
    for(int num{1}; num <=150; ++num)
    { 
        for(std::size_t index{0}; index < divisors.size(); ++index)
    {
            if(!(num % divisors[index] == 0))
                std::cout<<num<<'\n';
                break;

            if(num % divisors[0] == 0)
                divisor_checks[0] = true;

            if(num % divisors[1] == 0)
                divisor_checks[1] = true;

            if(num % divisors[2] == 0)
                divisor_checks[2] = true;

            if(num % divisors[4] == 0)
                divisor_checks[4] = true;

            if(num % divisors[5] == 0)
                divisor_checks[5] = true;
            
            if(num % divisors[6] == 0)
                divisor_checks[6] = true;
    }

    }
    
}