#include <iostream>
#include <math.h>



double multiply(double a, double b){
    return a*b;
}

double add(double a, double b){
    return a+b;
}

double subtract(double a, double b){
    return a-b;
}

double divide(double a, double b){
    return a/b;
}

double square(double a){
    return sqrt(a);
}

double modulus(int a, int b){
    return a % b;
}

double factorial(double num){
    int counter{0};
    while (num>0)
    {
        num*counter;
        counter --;
    }
    
}


int main(){
    double num_1 {0};
    double num_2 {0};
    std::cout <<"enter the numbers you want to know to moduluses of: ";
    std::cin>>num_1>>num_2;
    std::cout << "The modulus of " << num_1<< " % " <<num_2 << " is " << modulus(2,2);
    return 0; 
}
