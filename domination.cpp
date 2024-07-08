#include <iostream>

enum Year { jan, feb, march, april, may, june, july, aug, sept, oct, nov, dec };

int main() {
    int i;
    for (i = jan; i <= dec; i++) {
        std::cout << i << " ";
    }
    return 0;
}
