#include <vector>

/*Since arrays use unsigned types for indexes some interesting errors
can occur with type conversions as the underlying type of an 
enum could not not an unsigned types on other platforms


Since the compiler implicitly (automatically) constexpr,
if we index with unscoped enums, no sign conversion errors will 
happen
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

    Students::Names name {Students::stan};

    testScores[name] = 76;
}