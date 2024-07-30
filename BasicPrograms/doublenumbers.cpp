#include <iostream>


int main(){
    using namespace std;
    
    int num{ };
    cout << "Enter an integer number: ";
    cin >> num;
    
    cout <<"\nDouble that number is: " << num*2 << '\n';
    cout << "\nTriple that number is : " << num*3;
    return 0;
}