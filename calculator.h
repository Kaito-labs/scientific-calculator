#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <stdbool.h>

// Function prototypes
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double power(double base, double exponent);
double square_root(double x);
long factorial(int n);
double logarithm(double x);
double sine(double x);
double cosine(double x);
double tangent(double x);
void display_menu(void);
void clear_input_buffer(void);

#endif
