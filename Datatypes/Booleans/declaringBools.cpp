#include <iostream>

int main()
{   
    /*Boolean variables are variables 
    that can have only two possible 
    values: true, and false.
    
    To declare a Boolean variable, 
    we use the keyword bool.*/
    bool b;

/*To initialize or assign a true or false value to 
a Boolean variable, we use the keywords 
true and false.*/

    bool b1 { true };
    bool b2 { false };
    b1 = false;
    bool b3 {}; // default initialize to false

/*not operator can be used to flip boolean 
value to the oposite e.g from true to false*/

    bool b4 { !true }; // b1 will be initialized with the value false
    bool b5 { !false }; // b2 will be initialized with the value true

/*Boolean values are not actually stored in
 Boolean variables as the words “true” or “false”. 
 Instead, they are stored as integers: true becomes 
 the integer 1, and false becomes the integer 0. 
 */
    return 0; 
}