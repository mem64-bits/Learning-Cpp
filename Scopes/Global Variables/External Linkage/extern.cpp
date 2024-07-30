#include <iostream>

/*Global variables with external linkage are sometimes called 
external variables. To make a global variable external we can 
use the extern keyword to do so:*/

// non-constant globals are external by default
int g_x { 2 }; 

// const globals can be defined as extern, making them external
extern const int g_y { 3 }; // can be used in other files

// Don't use extern on constexpt
//sextern constexpr int g_z { 3 };

