#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //declaration
    double radius;
    double area;
    const double PI = 3.14159265358979;

    //input
    cout << "Enter the radius: ";
    cin  >> radius;

    //process
    // C++ has no '^' exponentiation operator (^ is bitwise XOR),
    // so pow() from <cmath> is used to square the radius.
    area = PI * pow(radius, 2);

    //display
    cout << "The area of the circle is: " << area << endl;

    return 0;
}
