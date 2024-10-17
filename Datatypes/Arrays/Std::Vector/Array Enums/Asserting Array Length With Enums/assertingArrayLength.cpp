#include <cassert> // for assert, static_assert 
#include <iostream>
#include <vector>


// We can use enums to insure that certain arrays have
// vaild information, e.g the array's max length

enum StudentNames
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
    std::vector testScores { 78, 94, 66, 77, 14 };

    // Ensure the number of test scores is the same as the number of students
    assert(std::size(testScores) == max_students);

    return 0;
}