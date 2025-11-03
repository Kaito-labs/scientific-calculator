#include "calculator.h"

/* Conversion helper */
static double degrees_to_radians(double degrees) {
    return degrees * M_PI / 180.0;
}

/* Basic arithmetic */
double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return NAN;
    }
    return a / b;
}

/* Advanced functions */       //corrected 
double power(double base, double exponent) { return pow(base, exponent); }
double square_root(double x) {
    if (x < 0) {
        printf("Error: Square root of negative number!\n");
        return NAN;
    }
    return sqrt(x);
}

long factorial(int n) {
    if (n < 0) {
        printf("Error: Negative factorial!\n");
        return -1;
    }
    long result = 1;
    for (int i = 1; i <= n; i++) result *= i;
    return result;
}

double logarithm(double x) {
    if (x <= 0) {
        printf("Error: Logarithm of non-positive number!\n");
        return NAN;
    }
    return log(x);
}

/* Trigonometry */
double sine(double degrees) { return sin(degrees_to_radians(degrees)); }
double cosine(double degrees) { return cos(degrees_to_radians(degrees)); }
double tangent(double degrees) { return tan(degrees_to_radians(degrees)); }

/* Menu */
void display_menu(void) {
    printf("\n===== SCIENTIFIC CALCULATOR =====\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Power\n");
    printf("6. Square Root\n");
    printf("7. Factorial\n");
    printf("8. Logarithm\n");
    printf("9. Sine\n");
    printf("10. Cosine\n");
    printf("11. Tangent\n");
    printf("0. Exit\n");
    printf("================================\n");
}

/* Input utility */   //fixed
void clear_input_buffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}
