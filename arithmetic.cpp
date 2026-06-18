#include <iostream>
using namespace std;

int main(){
    //declaration
    int number1;
    int number2;
    int sum;
    int diff;
    int product;
    double quotient;

    cout << "Enter first number: ";
    cin  >> number1;
    cout << "Enter second number: ";
    cin  >> number2;

    //process
    sum      = number1 + number2;
    diff     = number1 - number2;
    product  = number1 * number2;
    quotient = (double)number1 / number2;

    //display
    cout << "The sum is: "        << sum      << endl;
    cout << "The difference is: " << diff     << endl;
    cout << "The product is: "    << product  << endl;
    cout << "The quotient is: "   << quotient << endl;

    return 0;
}
