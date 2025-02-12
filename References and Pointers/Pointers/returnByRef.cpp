#include <iostream>
#include <string>

const std::string& getProgramName() // returns a const reference

{  
/*static needs to used to allow the variable to continue being referenced 
outside the function without being destroyed to avoid hanging references
*/
    static const std::string s_programName { "Calculator" }; // has static duration, destroyed at end of program

    return s_programName;
}

int main()
{
    std::cout << "This program is named " << getProgramName();

    return 0;
}