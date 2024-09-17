#include <vector>

/*sometimes accessing the index of an array 
can be hard to underd=stand and know what
it represents*/

int main()
{
    std::vector testScores { 78, 94, 66, 77, 14 };

    testScores[2] = 76; // who does this represent?
}