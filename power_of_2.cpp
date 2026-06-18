#include <iostream>
using namespace std;

int main(){
    //declaration
    int  num;
    bool isPowerOf2;

    //input
    cout << "Enter a positive integer: ";
    cin  >> num;

    //process
    // A number is a power of 2 if it is greater than 0
    // AND the bitwise AND of num and (num - 1) equals 0.
    // Example: 8 = 1000, 7 = 0111 → 8 & 7 = 0000 (true)
    isPowerOf2 = (num > 0) && ((num & (num - 1)) == 0);

    //display
    if (isPowerOf2)
        cout << num << " is a power of 2." << endl;
    else
        cout << num << " is NOT a power of 2." << endl;

    return 0;
}
