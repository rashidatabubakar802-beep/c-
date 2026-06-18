#include <iostream>
#include <string>
using namespace std;

int main(){
    //declaration
    string input;
    bool   isHello;

    //input
    cout << "Enter a string: ";
    cin  >> input;

    //process
    isHello = (input == "hello");

    //display
    if (isHello)
        cout << "Hello!" << endl;
    else
        cout << "Goodbye!" << endl;

    return 0;
}
