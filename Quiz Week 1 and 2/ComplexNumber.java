public class ComplexNumber {
    private int realPart;
    private int imaginaryPart;

    // null constructor
    public ComplexNumber() {
        realPart = 1;
        imaginaryPart = 1;
    }

    // parametric constructor
    public ComplexNumber(int real, int imaginary) {
        realPart = real;
        imaginaryPart = imaginary;
    }

    // copy constructor
    public ComplexNumber(ComplexNumber other) {
        realPart = other.realPart;
        imaginaryPart = other.imaginaryPart;
    }

    public void display() {
        System.out.println(realPart + " + " + imaginaryPart + "i");
    }

    ComplexNumber add (ComplexNumber secondNumber) {
        ComplexNumber newComplexNumber = new ComplexNumber(this.realPart + secondNumber.realPart, this.imaginaryPart + secondNumber.imaginaryPart);
        return newComplexNumber;
    }

    ComplexNumber multiply (ComplexNumber secondNumber) {
        ComplexNumber newComplexNumber = new ComplexNumber(this.realPart * secondNumber.realPart - this.imaginaryPart * secondNumber.imaginaryPart, this.realPart * secondNumber.imaginaryPart + this.imaginaryPart * secondNumber.realPart);
        return newComplexNumber;
    }

    ComplexNumber subtract (ComplexNumber secondNumber) {
        ComplexNumber newComplexNumber = new ComplexNumber(this.realPart - secondNumber.realPart, this.imaginaryPart - secondNumber.imaginaryPart);
        return newComplexNumber;
    }

    public static void main(String[] args)
    {
        ComplexNumber c1 = new ComplexNumber(); // invoking null constructor
        c1.display(); // invoking display method

        ComplexNumber c2 = new ComplexNumber(2, 3); // invoking parametric constructor
        c2.display();

        ComplexNumber c3 = new ComplexNumber(c2); // invoking copy constructor
        c3.display();

        ComplexNumber c4 = c2.add(c3); // invoking add method
        c4.display();

        ComplexNumber c5 = c3.multiply(c4); // invoking multiply method
        c5.display();

        ComplexNumber c6 = c5.subtract(c2); // invoking subtract method
        c6.display();
    }
}