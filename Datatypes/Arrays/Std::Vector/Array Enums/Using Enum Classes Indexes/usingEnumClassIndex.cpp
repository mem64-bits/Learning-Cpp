#include <iostream>
#include <vector>


/*We prefer using enum classes to avoid poluting 
the global scope  

One Problem however is, that enum classes don't implictly convert
types unlike normal enums 

To solve this we can static_cast the enum, 
but that can be hard to read 

Instead we can overload the '+' operator to convert
the enum to unsigned*/

constexpr auto operator+(StudentNames a) noexcept{
    return static_cast<std::underlying_type_t<StudentNames>>(a);
}

enum class StudentNames // now an enum class
{
    kenny, // 0
    kyle, // 1
    stan, // 2
    butters, // 3
    cartman, // 4
    max_students // 5
};

int main()
{
    // uses + operator to convert signed enum to unsigned
    std::vector<int> testScores(+StudentNames::max_students);

    // compile error: no conversion from StudentNames to std::size_t
    //testScores[StudentNames::stan] = 76;

    testScores[+StudentNames::stan] = 76;


    // compile error: no conversion from StudentNames to any type that operator<< can output
    //std::cout << "The class has " << StudentNames::max_students << " students\n";

    std::cout << "The class has " << +StudentNames::max_students << " students\n";
    return 0;
}