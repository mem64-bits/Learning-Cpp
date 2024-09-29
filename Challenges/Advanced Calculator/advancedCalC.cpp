#include <iostream>
#include <string>
#include <vector>

 enum class Operator
 {
    ADD,
    SUB,
    MULT,
    DIV,
    UNKNOWN,
 };

template <typename T>
class Calculator{
private:


T m_operand{0};

public:
    Calculator(T operand)
    :m_operand{operand}
    {}

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
        m_operand /=num;
        return *this;
    }

    void print() const{
        std::cout<<m_operand;
    }  
};

 constexpr std::optional<Operator> getOpFromString(std::string_view op){
        if(op == "+") return Operator::ADD;
        if(op == "-") return Operator::SUB;
        if(op == "/") return Operator::DIV;
        if(op == "x") return Operator::MULT;
        else 
            return Operator::UNKNOWN;
    }

int main(){
    std::cout<<"-------------------------\n";
    std::cout<<"*                       *\n";
    std::cout<<"*   (CALCULATOR 1.0v)   *\n";
    std::cout<<"*                       *\n";
    std::cout<<"-------------------------\n\n";

    std::string operand_as_string{};
    std::cin>>operand_as_string;
    std::size_t elem_start {0};
    

     
    for (std::size_t element=0; element <= operand_as_string.size(); ++element){
        
        std::string_view operand_nums {};
        if(getOpFromString(operand_as_string) == Operator::ADD){
            std::cout<<"You used plus\n";
            std::string_view operand_nums {operand_as_string.substr(elem_start,element-1)};
            elem_start = element+1;
            break;
        }

        if(getOpFromString(operand_as_string) == Operator::SUB){
            std::cout<<"You used minus\n";
            break;
        }

        if(getOpFromString(operand_as_string) == Operator::MULT){
            std::cout<<"You used multiply \n";
            break;
        }

        if(getOpFromString(operand_as_string) == Operator::DIV){
            std::cout<<"You used divide\n";
            break;    
        }

        else{
            std::cout<<"Invalid operator please use +, -, x or /\n";
            break;
        }

        std::cout<<"Element nums before +: "<<operand_nums;
    }

    
    return 0;
    
}

