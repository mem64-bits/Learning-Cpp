#include <iostream>

// use s_ naming scheme for static variables
void incrementAndPrint(){   
    // static duration via static keyword.  
    // Only executed once
    static int s_value{ 1 }; 
    ++s_value;
    std::cout << s_value << '\n';
} // s_value is not destroyed here, but becomes inaccessible because it goes out of scope

int main()
{
    incrementAndPrint();
    incrementAndPrint();
    incrementAndPrint();

    return 0;
}
