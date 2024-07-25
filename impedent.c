#include<stdio.h>

// Function to find gcd and coefficients x, y using Extended Euclidean Algorithm
int gcdExtended(int a, int b, int *x, int *y) {
    // Base case when a is 0
    if (a == 0) {
        *x = 0;
        *y = 1;
        return b;
    }

    int x1, y1;
    // Recursive call to gcdExtended with parameters swapped
    int gcd = gcdExtended(b % a, a, &x1, &y1);
    // Update x and y using results of recursive call
    *x = y1 - (b / a) * x1;
    *y = x1;
    return gcd;
}

// Main function
int main() {
    int x, y;
    int a, b;

    // Input values of a and b from user
    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    // Call gcdExtended function to find gcd and coefficients x, y
    int g = gcdExtended(a, b, &x, &y);

    // Output results
    printf("gcd(%d, %d) = %d, x = %d, y = %d\n", a, b, g, x, y);

    return 0;
}
