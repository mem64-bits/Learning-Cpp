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
}

// Defining Structs
int main(){

// creates employee struct for john
// refers to whole struct
    Employee john{};

// To refer to particular objects in a struct use the (.) operator
    john.age = 32
    std::cout<<john.age;
    return 0;
}
