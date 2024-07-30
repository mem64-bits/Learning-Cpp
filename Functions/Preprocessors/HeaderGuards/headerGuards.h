/* We use header guards to avoid 
defining functions more than once 
breaking one definition (ODR)*/

/*When this header is #included, 
the preprocessor checks whether 
SOME_UNIQUE_NAME_HERE has been previously 
defined. If this is the first time we’re 
including the header, SOME_UNIQUE_NAME_HERE 
will not have been defined. */

// Every header file should have a header guard
#ifndef SOME_UNIQUE_NAME_HERE
#define SOME_UNIQUE_NAME_HERE

int multiply(int x, int y);
#endif

// you can also use #pragma once