#include <iostream>
using namespace std;

int main(){
    //declaration
    int  num1;
    int  num2;
    int  num3;
    bool isEqual;

    //input
    cout << "Enter first number: ";
    cin  >> num1;
    cout << "Enter second number: ";
    cin  >> num2;
    cout << "Enter third number: ";
    cin  >> num3;

    //process
    isEqual = (num1 == num2 && num2 == num3);

    //display
    if (isEqual)
        cout << "Equal" << endl;
    else
        cout << "Not equal" << endl;

    return 0;
}
