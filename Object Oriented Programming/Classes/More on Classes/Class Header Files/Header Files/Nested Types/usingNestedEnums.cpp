#include <iostream>

class Fruit
{
public:

/*we put our enum type in the class 
rather then outside ist to make it easier
to understand its connection to the class
and make it easier to use*/

iaenum Type
{
    apple,
    banana,
    cherry
};

private:
    Type m_type{};
    int m_percentageEaten {0};

public:
    Fruit(Type type) :
        m_type{type}
    {
    }

    Type getType() {return m_type; }

    int getpercentageEaten() {return m_percentageEaten;}

// We no longer need the prefix 
    constexpr bool isCherry() {return m_type == cherry;}
};

int main()
{
    // Outside the class we need the Fruit Prefix::
    Fruit apple{Fruit::apple};

    if (apple.getType() == Fruit::apple)
        std::cout<<"I am an apple";
    else
        std::cout<<"I am not an apple";
    return 0;
}