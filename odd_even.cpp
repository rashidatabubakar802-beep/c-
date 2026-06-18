#include <iostream>
using namespace std;

int main(){
    //declaration
    int  num;
    bool isOdd;

    //input
    cout << "Enter an integer: ";
    cin  >> num;

    //process
    isOdd = (num % 2 != 0);

    //display
    if (isOdd)
        cout << "Odd number" << endl;
    else
        cout << "Even number" << endl;

    return 0;
}
