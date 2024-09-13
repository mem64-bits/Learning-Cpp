#include <iostream>
#include <vector>

int main()
{
    std::vector testScores {84, 92, 76, 81, 56};
    // use std::size_t when iterating through arrays
    std::size_t length {testScores.size()};

    int average{0};
    for(std::size_t index{0}; index < length; ++index)
    {
        average =+ testScores[index];
        // adds values of array elements into onre variable
    }

    // average is equal to average divided by the length of the array
    // array is converted from unsigned size_t to int
      average /= static_cast<int>(length);
      std::cout<<"The class average is "<<average<< '\n';
}   