#include <iostream>

class Something
{
private:
    static inline int s_value{};

public: 
    static int getValue() {return s_value;}
// static member function
};


int main()
{
    std::cout<<Something::getValue();
}