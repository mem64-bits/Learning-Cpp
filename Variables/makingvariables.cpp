#include <iostream>

int main(){
    /*  defining a variable,
        giving it the name x, and that it 
        is of type int 

        Object =  An object is a region of memory
        that can store a value.A variable is a named object
    */
   
   // Declaration
   int x;
   double y;

   // Assignment 
   // '=' is used for assignment 
   x = 5;
   y = 6.2;

   std::cout<<x<<"\n";
   std::cout<<y<<"\n";
 
    /* Initilization = Declaration + Assignment
       
       e.g int h = 6;
       There are 6 basic ways to 
       initialize variables in C++:
    */

   
   int a;         // no initializer (default initialization)
   int b = 5;     // initializer after equals sign (copy initialization)
   int c( 6 );    // initializer in parenthesis (direct initialization, avoid)
   std::cout<<b<<"\n";
  
// List initialization methods (C++11) (preferred)
   int d { 7 };   // initializer in braces (direct list initialization)
   int e = { 8 }; // initializer in braces after equals sign (copy list initialization)
   int f {};      // initializer is empty braces (value initialization)

// // How to Initialize multiple variables (don't use)
// int a = 5, b = 6;          // copy initialization
// int c( 7 ), d( 8 );        // direct initialization
// int e { 9 }, f { 10 };     // direct brace initialization
// int g = { 9 }, h = { 10 }; // copy brace initialization
// int i {}, j {};            // value initialization

}
