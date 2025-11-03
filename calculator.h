#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <math.h>
#include <stdio.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

/* === Prototypes === */
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

void display_menu(void);
void clear_input_buffer(void);

#endif
