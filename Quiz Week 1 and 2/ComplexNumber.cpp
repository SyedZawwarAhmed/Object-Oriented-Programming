#include <iostream>

using namespace std;

class ComplexNumber {
    int realPart;
    int imaginaryPart;
    public:

    // null constructor
    ComplexNumber() {
        realPart = 1;
        imaginaryPart = 1;
    }

    // constructor with parameters
    ComplexNumber(int real, int imaginary) {
        realPart = real;
        imaginaryPart = imaginary;
    }

    // copy constructor
    ComplexNumber(const ComplexNumber &other) {
        realPart = other.realPart;
        imaginaryPart = other.imaginaryPart;
    }

    void display() {
        cout << this->realPart << " + " << this->imaginaryPart << "i" << endl;
    }

    ComplexNumber add (ComplexNumber secondNumber) {
        return ComplexNumber(this->realPart + secondNumber.realPart, this->imaginaryPart + secondNumber.imaginaryPart);
    }

    ComplexNumber multiply (ComplexNumber secondNumber) {
        return ComplexNumber(this->realPart * secondNumber.realPart - this->imaginaryPart * secondNumber.imaginaryPart, this->realPart * secondNumber.imaginaryPart + this->imaginaryPart * secondNumber.realPart);
    }

    ComplexNumber subtract (ComplexNumber secondNumber) {
        return ComplexNumber(this->realPart - secondNumber.realPart, this->imaginaryPart - secondNumber.imaginaryPart);
    }
};