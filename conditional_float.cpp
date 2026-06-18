#include <iostream>
using namespace std;

int main(){
    //declaration
    double num1;
    double num2;
    double larger;

    //input
    cout << "Enter first floating point number: ";
    cin  >> num1;
    cout << "Enter second floating point number: ";
    cin  >> num2;

    //process
    // Conditional (ternary) operator to find the larger float
    larger = (num1 > num2) ? num1 : num2;

    //display
    cout << "The larger number is: " << larger << endl;

    return 0;
}
