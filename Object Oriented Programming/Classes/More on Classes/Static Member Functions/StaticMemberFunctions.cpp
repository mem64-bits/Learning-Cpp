#include <iostream>

/*Note: static functions have no this pointer*/
class Something
{
private:
    static inline int s_value{1};

public: 
    static int getValue() {return s_value;}
// static member function
};


int main()
{
    std::cout<<Something::getValue();
}