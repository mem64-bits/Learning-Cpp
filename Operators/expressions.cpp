#include <iostream>
#include <cmath>

int five()
{
    return 5;
}

 int circle()
    {
        using namespace std;
        double radius {};
        double pi {3.14};
        cout << "What is the radius of your circle ?: ";
        cin >> radius;
        double circumference{3.14*pow(radius,2)};
        cout << circumference;
        return 0;
    }


int main()
{
/* 
    An Expression is a combonation of  
    literals, variables, operators,
    and function calls that calculates 
    a single value.
*/

    int a{ 2 };             // initialize variable a with literal value 2
    int b{ 2 + 3 };         // initialize variable b with computed value 5
    int c{ (2 * 3) + 4 };   // initialize variable c with computed value 10
    int d{ b };             // initialize variable d with variable value 5
    int e{ five() };        // initialize variable e with function return value 5 
    circle();
    return 0;
}