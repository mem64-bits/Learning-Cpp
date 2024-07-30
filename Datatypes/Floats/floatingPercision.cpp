#include <iostream>
#include <iomanip> // for ostd::setprecision()

//Default precision is 6 
int main()
{   // 'f' means float
    std::cout << std::setprecision(17); // show 17 digits of percision
    std::cout<<3.33333333333333333333333333333333333333f <<'\n';
    std::cout << 3.33333333333333333333333333333333333333 << '\n'; // no suffix means double 
    return 0;
}

/*Avoid using floats unless you have memory restrictions 
as they aren't as precise as doubles can lead to 
percision errors
*/