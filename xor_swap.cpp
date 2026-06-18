#include <iostream>
using namespace std;

int main(){
    //declaration
    int a;
    int b;

    //input
    cout << "Enter first value: ";
    cin  >> a;
    cout << "Enter second value: ";
    cin  >> b;

    //display (before swap)
    cout << "Before swap: a = " << a << ", b = " << b << endl;

    //process
    // Bitwise XOR swap - no temporary variable needed
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    //display (after swap)
    cout << "After swap:  a = " << a << ", b = " << b << endl;

    return 0;
}
