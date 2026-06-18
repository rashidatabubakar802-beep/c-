#include <iostream>
using namespace std;

int main(){
    //declaration
    int  num1;
    int  num2;
    bool firstIsGreater;

    //input
    cout << "Enter first number: ";
    cin  >> num1;
    cout << "Enter second number: ";
    cin  >> num2;

    //process
    firstIsGreater = (num1 > num2);

    //display
    if (firstIsGreater)
        cout << "First value is greater" << endl;
    else
        cout << "Second value is greater" << endl;

    return 0;
}
