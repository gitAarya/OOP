#include <stdio.h>

// Function to compute logical OR
int OR(int a, int b) {
    return a || b;
}

int main() {
    int a, b;
    // Print the header for the truth table
    printf(" A \t B \t A OR B \n");
    
    // Loop through all possible values of A and B
    for (a = 0; a <= 1; a++) {
        for (b = 0; b <= 1; b++) {
            // Print the values of A, B, and the result of A OR B
            printf("%d \t %d \t %d\n", a, b, OR(a, b));
        }
    }
    return 0;
}
