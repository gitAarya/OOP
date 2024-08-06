#include <iostream>

using namespace std;

int main() {
    int *ptr;

    // Allocate memory for an integer
    ptr = new int;
    *ptr = 42;
    cout << "Value: " << *ptr << endl;

    // Deallocate the memory
    delete ptr;

    return 0;
}
