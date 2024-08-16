#include <iostream>


struct Employee
{
    int id{};
    int age{};
    double wage{};
};


// We can pass in structs by reference
void printEmployee(const Employee& employee)
{
    std::cout<< "ID: "<< employee.id<<'\n';
    std::cout<< "Age: "<< employee.age<<'\n';
    std::cout<< "Wage: "<< employee.wage<<'\n';
}

int main(){
    Employee joe{14,32,24.15};
    Employee frank {15,28,18.27};

//  Print Joe's information
    std::cout<<"Pass by Reference\n";
    printEmployee(joe);
    std::cout<<'\n';

// Print Frank's information
    printEmployee(frank);

// Sometimes its better to use a temporary value to save time
// space and reduce complexity
    std::cout<<'\n';

// Print Joe's infomation
    std::cout<<"Temporary Values";
    printEmployee(Employee { 14, 32, 24.15 });
    std::cout<<'\n';

    printEmployee(Employee{15, 28, 18.27 });
    return 0;
}