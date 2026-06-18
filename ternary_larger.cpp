#include <iostream>
using namespace std;

int main(){
    //declaration
    int num1;
    int num2;
    int larger;

    //input
    cout << "Enter first integer: ";
    cin  >> num1;
    cout << "Enter second integer: ";
    cin  >> num2;

    //process
    // Ternary operator: condition ? value_if_true : value_if_false
    larger = (num1 > num2) ? num1 : num2;

    //display
    cout << "The larger number is: " << larger << endl;

    return 0;
}
