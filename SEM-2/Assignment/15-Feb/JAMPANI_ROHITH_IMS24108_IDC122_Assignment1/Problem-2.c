//2. Write a C program to compute the derivative of a function using the backward difference formula. f′(x)=(f(x)−f(x−h))/h//

#include <stdio.h>
#include <math.h>


double f(double x) {
    return x * x * x - 4 * x + 1;   // Function definition: f(x) = x^3 - 4x + 1
}

double backward_difference(double x, double h){
  return (f(x) - f(x-h))/h;
}

double actual_derivative(double x) {    
    return 3 * x * x - 4;      // Derivative of f(x): f'(x) = 3x^2 - 4
}

int main() {
  double x=2;
  double h=0.001;
  double actual_result;
  double backward_result;


    backward_result = backward_difference(x, h);  // Compute the derivative using backward difference formula

    actual_result = actual_derivative(x);  // Compute the actual derivative
    
    // Print the results
    printf("Computed derivative using backward difference: %lf\n", backward_result);
    printf("Computed derivative using actual derivative: %lf\n", actual_result);
    
    // Compare the results
    printf("Difference between computed and actual derivative: %lf\n", fabs(backward_result - actual_result));
    
    return 0;
}
