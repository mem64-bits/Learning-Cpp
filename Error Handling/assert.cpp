#include <iostream>
#include <cassert> //contains assert()
// you can disable assert by using NDEBUG MACRO

/*An assertion is an expression that will be 
true unless there is a bug in the program. 

If the expression evaluates to true, 
the assertion statement does nothing. 

If the conditional expression evaluates to false, 
an error message is displayed and 
the program is terminated (via std::abort*/

int getUserAge(){
    int age{};
    std::cout<<"What is your age ?: ";
    std::cin>>age;
    return age;
}

void ageValidater(int age){
    assert(age > 0 &&  "Age cannot be a negative number"); // stops program if age is < 0

    if(age < 18){
        std::cout<<"You are not old enough to drink";
    }

}

int main(){
    int age{getUserAge()};
    ageValidater(age);
    return 0;
}