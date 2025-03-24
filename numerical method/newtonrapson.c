#include <stdio.h>
#include <math.h>

// Define the function f(x) for which we want to find the root
double f(double x) {
    return x * x - 4; // Example: f(x) = x^2 - 4
}

// Define the derivative of f(x)
double f_derivative(double x) {
    return 2 * x; // Example: f'(x) = 2x
}

// Newton-Raphson method
double newton_raphson(double x0, double tol, int max_iter) {
    double x = x0;
    int iter = 0;
    
    while (iter < max_iter) {
        // Calculate the next approximation
        double x_new = x - f(x) / f_derivative(x);
        
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
    
    // Call the Newton-Raphson method
    double root = newton_raphson(x0, tol, max_iter);
    
    // Display the result
    printf("Root: %lf\n", root);
    
    return 0;
}
