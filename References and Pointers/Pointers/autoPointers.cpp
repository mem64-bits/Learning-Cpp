#include <string>
// Unlike references, type deduction does not drop pointers:

std::string* getPtr(); // some function that returns a pointer

int main()
{
    auto ptr1{ getPtr() }; // std::string*

    return 0;
}