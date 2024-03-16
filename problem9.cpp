/*Print the sum, difference and product of two complex numbers by creating a class named 'Complex'
with separate functions for each operation whose real and imaginary parts are entered by the user. */


#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    // Constructor to initialize complex number
    Complex(double r, double i) {
        real = r;
        imag = i;
    }

    // Function to add two complex numbers
    Complex add(const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    // Function to subtract two complex numbers
    Complex subtract(const Complex& other) {
        return Complex(real - other.real, imag - other.imag);
    }

    // Function to multiply two complex numbers
    Complex multiply(const Complex& other) {
        double newReal = real * other.real - imag * other.imag;
        double newImag = real * other.imag + imag * other.real;
        return Complex(newReal, newImag);
    }

    // Function to display the complex number
    void display() {
        cout << real;
        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";
        cout << endl;
    }
};

int main() {
    double real1, imag1, real2, imag2;
    cout << "Enter real and imaginary parts of the first complex number: ";
    cin >> real1 >> imag1;
    cout << "Enter real and imaginary parts of the second complex number: ";
    cin >> real2 >> imag2;

    Complex num1(real1, imag1);
    Complex num2(real2, imag2);

    // Calculate and display results
    Complex sum = num1.add(num2);
    Complex diff = num1.subtract(num2);
    Complex product = num1.multiply(num2);

    cout << "Sum: ";
    sum.display();

    cout << "Difference: ";
    diff.display();

    cout << "Product: ";
    product.display();

    return 0;
}
