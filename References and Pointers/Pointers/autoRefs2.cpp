#include <string>

const std::string& getConstRef(); // some function that returns a const reference

int main()
{
    auto ref1{ getConstRef() };        // std::string (reference and top-level const dropped)
    const auto ref2{ getConstRef() };  // const std::string (reference dropped, const reapplied)

    auto& ref3{ getConstRef() };       // const std::string& (reference reapplied, low-level const not dropped)
    const auto& ref4{ getConstRef() }; // const std::string& (reference reapplied, low-level const not dropped)

    return 0;
}