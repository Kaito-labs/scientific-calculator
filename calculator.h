#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function declarations
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double power(double base, double exponent);
double square_root(double x);
long factorial(int n);
double logarithm(double x);
double sine(double degrees);
double cosine(double degrees);
double tangent(double degrees);
double degrees_to_radians(double degrees);

// Function implementations
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
    // Handle special cases
    if (base == 0 && exponent <= 0) {
        printf("Error: 0 raised to non-positive power is undefined.\n");
        return 0;
    }
    
    // Use pow function from math.h
    return pow(base, exponent);
}

double square_root(double x) {
    if (x < 0) {
        printf("Error: Cannot calculate square root of negative number.\n");
        return 0;
    }
    return sqrt(x);
}

long factorial(int n) {
    if (n < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
        return -1;
    }
    if (n > 20) {
        printf("Error: Factorial too large for long data type (n > 20).\n");
        return -1;
    }
    
    long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

double logarithm(double x) {
    if (x <= 0) {
        printf("Error: Logarithm is only defined for positive numbers.\n");
        return 0;
    }
    return log(x); // Natural logarithm
}

double degrees_to_radians(double degrees) {
    return degrees * M_PI / 180.0;
}

double sine(double degrees) {
    double radians = degrees_to_radians(degrees);
    return sin(radians);
}

double cosine(double degrees) {
    double radians = degrees_to_radians(degrees);
    return cos(radians);
}

double tangent(double degrees) {
    double radians = degrees_to_radians(degrees);
    
    // Check for angles where cosine is zero (tangent undefined)
    double cos_val = cos(radians);
    if (fabs(cos_val) < 1e-10) {
        printf("Error: Tangent is undefined for angle %.2lf degrees.\n", degrees);
        return 0;
    }
    
    return tan(radians);
}

#endif // CALCULATOR_H
