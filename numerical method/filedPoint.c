#include <stdio.h>
#include <math.h>

// Define the function g(x) for Fixed-Point Iteration
double g(double x) {
    return sqrt(4 + x); // Example: rearranged form of x^2 - 4 = 0
}

// Fixed-Point Iteration method
double fixed_point_iteration(double x0, double tol, int max_iter) {
    double x = x0;
    int iter = 0;

    while (iter < max_iter) {
        // Calculate the next approximation
        double x_new = g(x);
        
        // Check for convergence
        if (fabs(x_new - x) < tol) {
            return x_new; // Return the root when tolerance is met
        }
        
        x = x_new; // Update the approximation
        iter++;
    }
    
    printf("Maximum iterations reached without convergence.\n");
    return x;
}

int main() {
    double x0, tol;
    int max_iter;

    // Initial guess, tolerance, and maximum iterations
    printf("Enter initial guess: ");
    scanf("%lf", &x0);
    printf("Enter tolerance: ");
    scanf("%lf", &tol);
    printf("Enter maximum iterations: ");
    scanf("%d", &max_iter);
    
    // Call the Fixed-Point Iteration method
    double root = fixed_point_iteration(x0, tol, max_iter);
    
    // Display the result
    printf("Root: %lf\n", root);
    
    return 0;
}
