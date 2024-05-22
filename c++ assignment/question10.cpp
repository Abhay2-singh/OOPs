//  Design a C++ Class ‘Complex’ with data members for real and imaginary part. Provide default and
// parameterized constructors. Write a program to perform arithmetic operations of two complex numbers
// using operator overloading (using either member functions or friend functions)
#include <iostream>
class Complex {
private:
    float real;
    float imag;

public:
    // Default constructor
    Complex() {
        real = 0;
        imag = 0;
    }

    // Parameterized constructor
    Complex(float r, float i) {
        real = r;
        imag = i;
    }

    // Addition operator overloading
    Complex operator+(const Complex& other) {
        Complex result;
        result.real = real + other.real;
        result.imag = imag + other.imag;
        return result;
    }

    // Subtraction operator overloading
    Complex operator-(const Complex& other) {
        Complex result;
        result.real = real - other.real;
        result.imag = imag - other.imag;
        return result;
    }

    // Multiplication operator overloading
    Complex operator*(const Complex& other) {
        Complex result;
        result.real = (real * other.real) - (imag * other.imag);
        result.imag = (real * other.imag) + (imag * other.real);
        return result;
    }

    // Display the complex number
    void display() {
        std::cout << "Real: " << real << ", Imaginary: " << imag << std::endl;
    }
};

int main() {
    Complex num1(3, 4); // Creating a complex number with real part 3 and imaginary part 4
    Complex num2(1, 2); // Creating another complex number with real part 1 and imaginary part 2

    Complex sum = num1 + num2; // Adding two complex numbers
    Complex difference = num1 - num2; // Subtracting two complex numbers
    Complex product = num1 * num2; // Multiplying two complex numbers

    std::cout << "Sum: ";
    sum.display();

    std::cout << "Difference: ";
    difference.display();

    std::cout << "Product: ";
    product.display();

    return 0;
}
