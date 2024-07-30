#ifndef CONSTANTS_H
#define CONSTANTS_H

// Old method (use inline method if on C++ 17 or higher)
namespace constants{
// constants have internal linkage by default
constexpr double pi{3.14159};
constexpr double avogadro { 6.0221413e23 };
constexpr double myGravity {9.2};

}
#endif

// Downsides
/*  1. Changing a single constant value would require recompiling every file that includes the constants header, 
       which can lead to lengthy rebuild times for larger projects.
       
    2. If the constants are large in size and can’t be optimized away, this can use a lot of memory.*/