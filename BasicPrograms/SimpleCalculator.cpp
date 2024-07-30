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
    double result{0};
    for (int i = num; i > 0; i--)
    {
        result = num * i;
    }
    
    return result;
}