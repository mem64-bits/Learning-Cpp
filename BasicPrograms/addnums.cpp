#include <iostream>

int main(){
    using namespace std;
    int num_1,num_2{};
    cout << "Enter an integer: ";
    cin >> num_1;

    cout << "\nEnter another integer: ";
    cin >> num_2;

    cout << '\n' << num_1 << " + " << num_2 << " is " << num_1+num_2 << '\n';
    cout << '\n' << num_1 << " - " << num_2 << " is " << num_1-num_2 << '\n';
    return 0;
}