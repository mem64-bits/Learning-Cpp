/*Delegating functions helps 
reduce redundant Code*/

void A()
{
    // statements that do task A
}

void B()
{
    // statements that do task A
    // statements that do task B
}

void A()
{
    // statements that do task A
}
// we can refactor function B() to reuse the function A()
void B()
{
    A();
    // statements that do task B
}