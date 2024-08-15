#include <stdio.h>

int main() {
    long a, b;
    int i = 0, c = 0, sum[20];
    
    // Input first binary number
    printf("Enter the first binary number:\n");
    scanf("%ld", &a);
    
    // Input second binary number
    printf("Enter the second binary number:\n");
    scanf("%ld", &b);
    
    // Convert second number to its two's complement (negative equivalent)
    b = ~b + 1;
    
    // Perform binary subtraction
    while (a != 0 || b != 0) {
        sum[i++] = (a % 10 + b % 10 + c) % 2;
        c = (a % 10 + b % 10 + c) / 2;
        a = a / 10;
        b = b / 10;
    }
    
    if (c != 0) {
        sum[i++] = c;
    }
    
    // Print result in reverse order
    printf("The difference of the two binary numbers is: ");
    for (i = i - 1; i >= 0; i--) {
        printf("%d", sum[i]);
    }
    printf("\n");
    
    return 0;
}
