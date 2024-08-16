#include <iostream>


struct Employee
{
    int id{};
    int age{};
    double wage{};
};


// We can pass in structs by reference
void printEmployeee(const Employee& employee)
{
    std::cout<< "ID: "<< employee.id<<'\n';
    std::cout<< "Age: "<< employee.age<<'\n';
    std::cout<< "Wage: "<< employee.wage<<'\n';
}

int main(){
    Employee joe{14,32,24.15};
    Employee frank {15,28,18.27};

//  Print Joe's information
    printEmployeee(joe);
    std::cout<<'\n';

// Print Frank's information
    printEmployeee(frank);
    return 0;
}