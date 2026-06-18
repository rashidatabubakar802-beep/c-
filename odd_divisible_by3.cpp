#include <iostream>
using namespace std;

int main(){
    //declaration
    int  num;
    bool isOddAndDivisibleBy3;

    //input
    cout << "Enter a number: ";
    cin  >> num;

    //process
    // Logical AND (&&) checks both conditions at the same time
    isOddAndDivisibleBy3 = (num % 2 != 0) && (num % 3 == 0);

    //display
    if (isOddAndDivisibleBy3)
        cout << num << " is both odd and divisible by 3." << endl;
    else
        cout << num << " is NOT both odd and divisible by 3." << endl;

    return 0;
}
