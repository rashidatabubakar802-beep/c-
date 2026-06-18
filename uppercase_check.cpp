#include <iostream>
#include <cctype>
using namespace std;

int main(){
    //declaration
    char ch;
    bool isUpper;

    //input
    cout << "Enter a character: ";
    cin  >> ch;

    //process
    isUpper = (ch >= 'A' && ch <= 'Z' && isupper(ch));

    //display
    if (isUpper)
        cout << "Uppercase letter" << endl;
    else
        cout << "Not an uppercase letter" << endl;

    return 0;
}
