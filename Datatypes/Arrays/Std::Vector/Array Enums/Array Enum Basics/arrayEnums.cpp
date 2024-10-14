#include <iostream>
#include <vector>

namespace Students
{

    // these enums correspond to the indexes of an array
    enum Names
    {
        kenny, // 0
        kyle, // 1
        stan, // 2
        butters, // 3
        cartman, // 4
        // add future enumerators here
        max_students // 5
    };
}

int main()
{
    std::vector<int> testScores(Students::max_students); // Create a vector with 5 elements
    
    // puts value in testScores[2] under the hood 
    testScores[Students::stan] = 76; // we are now updating the test score belonging to stan

    std::cout << "The class has " << Students::max_students << " students\n";
    
    
    std::cout<<testScores[Students::stan]<<'\n';// prints out 76

    // Same as printing out testScores[Students::stan]
    std::cout<<testScores[2]<<'\n';// prints out 76

    return 0;
}