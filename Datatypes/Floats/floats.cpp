#include <iostream>

// floats are used to hold decimal values 
int main(){
    /*   Category       Type            Typical Size  Minimum Size su
        floating point	float	        4 bytes	      4 bytes
	                    double	        8 bytes	      8 bytes
	                    long double	    8 bytes	      8, 12, or 16 bytes
    */
// Variable examples 
 float fValue;
 double dValue;
 long double ldValue;  

/*
When using floating point literals, always include 
at least one decimal place (even if the decimal is 0). 
This helps the compiler understand that the number 
is a floating point number and not an integer.
*/
int x{5};      // 5 means integer
double y{5.0}; // 5.0 is a floating point literal (no suffix means double type by default)
float z{5.0f}; // 5.0 is a floating point literal, f suffix means float type
}