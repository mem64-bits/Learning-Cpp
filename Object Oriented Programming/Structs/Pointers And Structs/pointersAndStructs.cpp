#include <iostream>

struct Employee
{
    int id{};
    int age{};
    double wage{};
};

int main()
{
    Employee joe{ 1, 34, 65000.0 };

    ++joe.age;
    joe.wage = 68000.0;

    Employee* ptr{ &joe };

    // Ugly 
    std::cout << (*ptr).id << '\n'; // Not great but works: First dereference ptr, then use member selection

    // use member selection from pointer operator
    std::cout<<ptr->id<<'\n';
    return 0;
}