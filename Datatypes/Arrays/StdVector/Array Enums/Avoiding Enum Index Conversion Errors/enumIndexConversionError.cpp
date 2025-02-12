#include <vector>

/*Since arrays use unsigned types for indexes some interesting warinings/
errors
can occur with type conversions as the underlying type of an 
enum could not not an unsigned types on other platforms


Since the compiler implicitly (automatically) constexpr,
if we index with unscoped enums, no sign conversion errors will 
happen

But if we make a non-constexpr variable of an enum type,
we could get sign conversion errors with on any platform,
that uses signed type enums by default
*/
namespace Students{

    enum Names{
        kenny, // 0
        kyle, // 1
        stan, // 2
        butters, // 3
        cartman, // 4
        max_students // 5
    };

}

int main(){
    std::vector testScores {78, 94, 66, 77, 14};

    // Definnes non constexpr enum variable
    Students::Names name {Students::stan};// warning: Sign Conversions

    testScores[name] = 76;
}