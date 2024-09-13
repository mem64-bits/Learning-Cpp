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
    std::cout<<std::boolalpha<<divisor_checks[0];
    




}