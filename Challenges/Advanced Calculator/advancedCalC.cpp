#include <iostream>
#include <string>

template <typename T, typename U>
class Calculator{
private:

enum Operator{
   ADD,
   SUB,
   MULT,
   DIV,
};

T m_operand{0};
Operator operator{};

public:
    Calculator& add(T num){
        m_operand += num;
        return *this
    }

    Calculator& sub(T num)
};

int main()
{

    return 0;
}

