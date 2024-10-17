#include <vector>

/*Since arrays use unsigned types for indexes some interesting errors
    
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