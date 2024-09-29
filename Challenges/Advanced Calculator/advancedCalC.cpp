#include <iostream>
#include <string>
#include <vector>
template <typename T>
class Calculator{
private:

enum operanderator{
   ADD,
   SUB,
   MULT,
   DIV,
};

T m_operand{0};
operanderator operand;


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

    std::cout<<"-------------------------\n";
    std::cout<<"*                       *\n";
    std::cout<<"*   (CALCULATOR 1.0v)   *\n";
    std::cout<<"*                       *\n";
    std::cout<<"-------------------------\n\n";

    std::string operand{};
    std::cin>>operand;

    for (int elements:operand)
    {
        if(operand == "10"){
            std::cout<<"Ten has been found";
            break;
        }

        else{
            std::cout<<"Number not found.";
            break;
        }
        
            
    }



   


    return 0;
}

