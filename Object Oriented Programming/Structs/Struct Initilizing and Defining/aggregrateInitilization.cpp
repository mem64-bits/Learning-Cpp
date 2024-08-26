struct Employee
{
    int id {};
    int age {};
    double wage {};
};

/*An aggregrate is an object
that can hold many diffrent values*
like a struct, class or array*/

int main()
{   
// Initializes multiple struct members at once

    Employee frank = { 1, 32, 60000.0 }; // copy-list initialization using braced list
    Employee joe { 2, 28, 45000.0 };     // list initialization using braced list (preferred)

// Missing members will be initilized to 0
    Employee john{3,24} // john.wage initilized to 0
    return 0;
}