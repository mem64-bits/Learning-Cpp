#include <iostream>

// use s_ naming scheme for static variables
void incrementAndPrint(){   
    // static duration via static keyword.  
    // Only executed once
    static int s_value{ 1 }; 
    ++s_value;
    std::cout << s_value << '\n';
} // s_value is not destroyed here, but becomes inaccessible because it goes out of scope

// static is often used to make id generators
int generateID()
{
    static int s_itemID{ 0 };
    return s_itemID++; // makes copy of s_itemID, increments the real s_itemID, then returns the value in the copy
}


int main()
{
    incrementAndPrint();
    incrementAndPrint();
    incrementAndPrint();

    std::cout<<'\n'<<generateID()<<'\n';
    std::cout<<generateID()<<'\n';
    std::cout<<generateID();


    return 0;
}
