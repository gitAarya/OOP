#include<iostream>
using namespace std;

class Time {
    int year;
    int month;

public:
    // Default constructor initializing to 0
    Time() : year(0), month(0) {}

    // Constructor that converts a float to years and months
    Time(float a) {
        year = int(a);                       // Extract the integer part for the years
        month = int((a - year) * 12);        // Convert the fractional part to months
    }

    // Function to display the years and months
    void display() {
        cout << "Year: " << year << "\n";
        cout << "Month: " << month << "\n";
    }
};

int main() {
    float y;
    cout << "Enter the fractional year (e.g., 1.5): ";
    cin >> y;

    Time t(y);  // Create a Time object using the float constructor
    t.display();  // Display the converted year and month

    return 0;
}
