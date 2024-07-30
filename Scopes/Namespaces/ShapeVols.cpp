#include <cmath>

namespace ShapeFormulas{
const double PI = 3.14159f;

double SphereVol(double radius){
    return (4/3.f)*PI*pow(radius,3);
}

double coneVol(double radius, double height){
    return (1/3.f)*(PI*pow(radius,2)*height);
}

double cylinVol(double radius, double height){
    return PI*pow(radius,2)*height;
}

double hemiVol(double radius){
    return (2.f/3.f)*PI*pow(radius,2);
}

double pyth(double a, double b, double c){
    double result {};

    if(c==0){
        result= sqrt(pow(a,2)+pow(b,2));
    }

    else if(b==0){
        result= sqrt(pow(a,2)+pow(c,2));
    }

    else if(a==0){
        result= sqrt(pow(b,2)+pow(c,2));
    }
     return result;
} 
}   
