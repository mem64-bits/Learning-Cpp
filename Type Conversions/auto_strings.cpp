#include <iostream>
#include <string>
#include <string_view>

/*
For historical reasons, 
string literals in C++ have a strange type. 
Therefore, the following probably won’t work as expected:

// s will be type const char*, not std::string
auto s { "Hello, world" }; 

If you want the type deduced from a string literal 
to be std::string or std::string_view, 
you’ll need to use the s or sv literal suffixes */

int main(){
    // easy way to import string suffixes
    using namespace std::literals;

    // tells auto that this is a string
    auto message{"Hello World"s};

    //tells auto to convert to string_view
    auto food{"Pizza"sv};

    std::cout<<message<<'\n';
    std::cout<<food<<'\n';
    
    return 0;
}