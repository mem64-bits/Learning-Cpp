#include <iostream>

/*An identifier with internal linkage can be seen 
and used within a single translation unit, but it 
is not accessible from other translation units*/

// All variables are externally linked by default
// the static keyword makes variables internally linked 
static int g_x{5};

// consts are internally linked by default
const int g_y{1};

// constexprs are internally linked by default
constexpr int g_z{2};
int main(){

    return 0;
}