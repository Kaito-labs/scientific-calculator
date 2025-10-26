#include "calculator.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return a / b;
}

double power(double base, double exponent) {
    return pow(base, exponent);
}

double square_root(double x) {
    if (x < 0) {
        printf("Error: Cannot calculate square root of negative number!\n");
        return 0;
    }
    return sqrt(x);
}

long factorial(int n) {
    if (n < 0) {
        printf("Error: Factorial of negative number doesn't exist!\n");
        return -1;
    }
    if (n == 0 || n == 1) {
        return 1;
    }
    
    long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

double logarithm(double x) {
    if (x <= 0) {
        printf("Error: Logarithm of non-positive number!\n");
        return 0;
    }
    return log(x);
}

double sine(double x) {
    return sin(x * M_PI / 180.0); // Convert to radians
}

double cosine(double x) {
    return cos(x * M_PI / 180.0); // Convert to radians
}

double tangent(double x) {
    return tan(x * M_PI / 180.0); // Convert to radians
}

void display_menu(void) {
    printf("\n=== SCIENTIFIC CALCULATOR ===\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Power (x^y)\n");
    printf("6. Square Root (√)\n");
    printf("7. Factorial (n!)\n");
    printf("8. Logarithm (ln)\n");
    printf("9. Sine (sin)\n");
    printf("10. Cosine (cos)\n");
    printf("11. Tangent (tan)\n");
    printf("0. Exit\n");
    printf("=============================\n");
    printf("Enter your choice: ");
}

void clear_input_buffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
