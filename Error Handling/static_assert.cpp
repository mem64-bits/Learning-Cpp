#include <iostream>
#include <cassert>

/*static_assert works similarly to assert
expect that static_assert works add compile time*/

// static_assert(condition, diagnostic_message)


int getUserAge(){
    int age{};
    std::cout<<"What is your age ?: ";
    std::cin>>age;
    return age;
}

void ageValidater(int age){

    if(age < 18){
        std::cout<<"You are not old enough to drink";
    }

}

int main(){
    const int age{6};
     static_assert(age > 0 &&  "Age cannot be a negative number"); // stops program if age is < 0
    ageValidater(age);
    return 0;
}