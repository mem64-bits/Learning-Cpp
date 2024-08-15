/* Structs are used to group multiple variables 
together to make a new complex type*/ 


// Example of a struct

/* struct keyword tells the compiler that we are making a struct
called Employee which is essentially a new datatype */

struct Employee
{
    int id {};
    int age {};
    double wage {};
    
    void printHello(){
        std::cout<<"Hello, World!\n";
    }
}

int main(){
    Employee.printHello();
    return 0;
}