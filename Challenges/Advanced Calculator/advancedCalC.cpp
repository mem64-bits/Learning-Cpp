#include <iostream>
#include <string>

template <typename T>
class Calculator{
private:

enum Operator{
   ADD,
   SUB,
   MULT,
   DIV,
};

T m_operand{0};


public:

    Calculator(T operand)
    :m_operand{operand}
    {
    }

    Calculator& add(T num){
        m_operand += num;
        return *this;
    }

    Calculator& sub(T num){
        m_operand -= num;
        return *this;
    }

    Calculator& mult(T num){
        m_operand *= num;
        return this;
    }

    Calculator& div(T num){
        return *this;
    }

    void print() const{
        std::cout<<m_operand;
    }
};



int main()
{
    Calculator calc{1};
    calc.add(5).sub(2).print();
    return 0;
}

