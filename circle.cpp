#include <iostream>
using namespace std;

int main() {
    float r, a;
    const float pi = 3.1415;
    
    cout << "Enter Radius: " << endl;
    cin >> r;
    
    a = pi * r * r;
    
    cout << endl << "Area of circle: " << a;
    
    return 0;
}
