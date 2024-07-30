/*The standard library is
all put in the std namespace*/
#include <iostream> 

/*Namespaces allow indentifers to have 
identical names by putting it in a special namespace scope

A name declared in a namespace won’t be mistaken 
for an identical name declared in another scope.*/

/*any name that is not defined inside a class, 
function, or a namespace is considered to be part of 
the global namespace (also called the global scope).*/

int main(){
/* if you use an identifer defined in a namespace 
you need to say that it lives in the namespace*/

// std:: means you want to use cout from std nanespace
    
    std::cout << "Using cout from std namespace" << '\n';
    return 0;
/* Dont'
use namespace std*/
}