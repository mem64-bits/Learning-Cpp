#include <iostream>



int main(){
    /*we can make an alias for data types 
    too with the using keyword*/

    using Distance = double;
    Distance mile{1.60};
    Distance kmToMeters{1000.00};

    std::cout<<"one mile is "<<mile<<" kilometers\n";
    std::cout<<"One kilometer is "<<kmToMeters<<" meters\n";
    return 0;
}