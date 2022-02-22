#include <iostream>
#include "ComplexNumber.cpp"

using namespace std;

int main() {
    ComplexNumber c1 = ComplexNumber(); // invoking null constructor
    ComplexNumber c2 = ComplexNumber(3, 4); // invoking constructor with parameters
    ComplexNumber c3 = ComplexNumber(c2); // invoking copy constructor
    c2.display(); // invoking display method
    c3.display();

    // cout << c2;

    ComplexNumber c4 = c1.add(c2); // invoking add method
    c4.display();

    ComplexNumber c5 = c4.multiply(c3); // invoking multiply method
    c5.display();

    ComplexNumber c6 = c5.subtract(c3); // invoking subtract method
    c6.display();

    return 0;
}