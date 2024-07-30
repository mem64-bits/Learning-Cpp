#include <iostream>
#include <string>
#include <string_view> // C++17

// Avoids the slowness of initializing std::string 
// makes read only version of string, can't be modified

void printStringView(std::string_view str){
    std::cout<<str<<'\n';
}

int main(){
#if 0
   // s makes a copy of its initializer
    std::string s{ "Hello, world!" };
    std::cout << s << '\n';
#endif

    // now a std::string_view
    std::string_view s{"Hello World"};
    printStringView(s);

    // Flexible, can be used to convert from std::string
    std::string s2{"Pizza"};
    std::string_view s3{s2};

    std::cout<<s2<<'\n';
    std::cout<<s3;
    return 0;
}

