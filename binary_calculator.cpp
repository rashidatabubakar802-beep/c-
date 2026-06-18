#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    //declaration
    long long binaryNum;
    int       decimal;
    int       remainder;
    int       position;
    int       choice;
    string    hexDigits = "0123456789ABCDEF";
    string    hexResult;
    string    octResult;
    int       temp;

    //display menu
    cout << "================================" << endl;
    cout << "    BINARY CONVERSION MENU      " << endl;
    cout << "================================" << endl;
    cout << "1. Binary to Decimal"             << endl;
    cout << "2. Binary to Hexadecimal"         << endl;
    cout << "3. Binary to Octal"               << endl;
    cout << "================================" << endl;
    cout << "Enter your choice (1, 2 or 3): ";
    cin  >> choice;

    //input
    cout << "Enter a binary number (e.g. 1010): ";
    cin  >> binaryNum;

    //process: first convert binary to decimal
    decimal  = 0;
    position = 0;
    temp     = binaryNum;

    while (temp != 0){
        remainder  = temp % 10;
        decimal   += remainder * pow(2, position);
        temp      /= 10;
        position++;
    }

    //display result based on choice
    cout << endl;
    cout << "================================" << endl;

    if (choice == 1){
        //display
        cout << "Binary    : " << binaryNum << endl;
        cout << "Decimal   : " << decimal   << endl;

    } else if (choice == 2){
        //process: decimal to hexadecimal
        hexResult = "";
        temp      = decimal;

        if (temp == 0){
            hexResult = "0";
        } else {
            while (temp > 0){
                hexResult = hexDigits[temp % 16] + hexResult;
                temp     /= 16;
            }
        }

        //display
        cout << "Binary      : " << binaryNum << endl;
        cout << "Hexadecimal : 0x" << hexResult << endl;

    } else if (choice == 3){
        //process: decimal to octal
        octResult = "";
        temp      = decimal;

        if (temp == 0){
            octResult = "0";
        } else {
            while (temp > 0){
                octResult = char('0' + temp % 8) + octResult;
                temp     /= 8;
            }
        }

        //display
        cout << "Binary  : " << binaryNum << endl;
        cout << "Octal   : "  << octResult << endl;

    } else {
        cout << "Invalid choice! Please enter 1, 2, or 3." << endl;
    }

    cout << "================================" << endl;

    return 0;
}
