#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //declaration
    long long binaryNum;
    int       decimal;
    int       remainder;
    int       position;

    //input
    cout << "Enter a binary number (e.g. 1010): ";
    cin  >> binaryNum;

    //process
    decimal  = 0;
    position = 0;

    while (binaryNum != 0){
        remainder  = binaryNum % 10;
        decimal   += remainder * pow(2, position);
        binaryNum /= 10;
        position++;
    }

    //display
    cout << "Decimal equivalent: " << decimal << endl;

    return 0;
}
