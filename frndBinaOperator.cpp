#include <iostream>
using namespace std;

class Complex {
private:
    float x; // Real part
    float y; // Imaginary part

public:
    // Default constructor
    Complex() : x(0), y(0) {}

    // Parameterized constructor
    Complex(float real, float imag) : x(real), y(imag) {}

    // Friend function to overload the + operator
    friend Complex operator+(const Complex& c1, const Complex& c2);

    // Function to display the complex number
    void display() const {
        cout << x << " + " << y << "i" << endl;
    }
};

// Definition of the friend function to overload the + operator
Complex operator+(const Complex& c1, const Complex& c2) {
    return Complex(c1.x + c2.x, c1.y + c2.y);
}

int main() {
    Complex c1(3.0, 4.0);
    Complex c2(1.5, 2.5);

    Complex c3 = c1 + c2;  // Using the overloaded + operator

    cout << "c1: ";
    c1.display();
    cout << "c2: ";
    c2.display();
    cout << "c3: ";
    c3.display();

    return 0;
}
   