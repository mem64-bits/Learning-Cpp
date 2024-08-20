#include <iostream>

/*Enums or Enumerations are compound types
that are resticted to named constant values*/

enum Colour
{
    red,
    blue,
    green,
};


int main(){
// Defines variables of enum type Colour
    Colour apple{red};
    Colour sky{blue};
    Colour leaf{green};

// This will produce an error
// as pink isn't a part of colour

// Colour shirt{pink};
}