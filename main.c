#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "calculator.h"

void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void display_menu() {
    printf("\n=== Scientific Calculator ===\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power\n");
    printf("6. Square Root\n");
    printf("7. Factorial\n");
    printf("8. Logarithm (natural)\n");
    printf("9. Sine\n");
    printf("10. Cosine\n");
    printf("11. Tangent\n");
    printf("0. Exit\n");
    printf("Enter your choice: ");
}

int read_double(const char* prompt, double* value) {
    printf("%s", prompt);
    if (scanf("%lf", value) != 1) {
        printf("Invalid input! Please enter a valid number.\n");
        clear_input_buffer();
        return 0;
    }
    return 1;
}

int read_int(const char* prompt, int* value) {
    printf("%s", prompt);
    if (scanf("%d", value) != 1) {
        printf("Invalid input! Please enter a valid integer.\n");
        clear_input_buffer();
        return 0;
    }
    return 1;
}

int main() {
    int choice;
    double num1, num2, result;
    int integer_input;
    
    printf("Welcome to Scientific Calculator!\n");
    printf("Developed in C Programming Language\n");
    
    while (1) {
        display_menu();
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            clear_input_buffer();
            continue;
        }
        
        if (choice == 0) {
            printf("Thank you for using Scientific Calculator! Goodbye!\n");
            break;
        }
        
        switch (choice) {
            case 1: // Addition
                if (read_double("Enter first number: ", &num1) && 
                    read_double("Enter second number: ", &num2)) {
                    result = add(num1, num2);
                    printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
                }
                break;
                
            case 2: // Subtraction
                if (read_double("Enter first number: ", &num1) && 
                    read_double("Enter second number: ", &num2)) {
                    result = subtract(num1, num2);
                    printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
                }
                break;
                
            case 3: // Multiplication
                if (read_double("Enter first number: ", &num1) && 
                    read_double("Enter second number: ", &num2)) {
                    result = multiply(num1, num2);
                    printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
                }
                break;
                
            case 4: // Division
                if (read_double("Enter numerator: ", &num1) && 
                    read_double("Enter denominator: ", &num2)) {
                    if (num2 == 0) {
                        printf("Error: Division by zero is not allowed.\n");
                    } else {
                        result = divide(num1, num2);
                        printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
                    }
                }
                break;
                
            case 5: // Power
                if (read_double("Enter base: ", &num1) && 
                    read_double("Enter exponent: ", &num2)) {
                    result = power(num1, num2);
                    printf("Result: %.2lf ^ %.2lf = %.2lf\n", num1, num2, result);
                }
                break;
                
            case 6: // Square Root
                if (read_double("Enter number: ", &num1)) {
                    if (num1 < 0) {
                        printf("Error: Cannot calculate square root of negative number.\n");
                    } else {
                        result = square_root(num1);
                        printf("Result: √%.2lf = %.2lf\n", num1, result);
                    }
                }
                break;
                
            case 7: // Factorial
                if (read_int("Enter integer (0-20): ", &integer_input)) {
                    if (integer_input < 0 || integer_input > 20) {
                        printf("Error: Factorial is only defined for integers 0-20.\n");
                    } else {
                        long fact_result = factorial(integer_input);
                        printf("Result: %d! = %ld\n", integer_input, fact_result);
                    }
                }
                break;
                
            case 8: // Logarithm
                if (read_double("Enter number: ", &num1)) {
                    if (num1 <= 0) {
                        printf("Error: Logarithm is only defined for positive numbers.\n");
                    } else {
                        result = logarithm(num1);
                        printf("Result: ln(%.2lf) = %.2lf\n", num1, result);
                    }
                }
                break;
                
            case 9: // Sine
                if (read_double("Enter angle in degrees: ", &num1)) {
                    result = sine(num1);
                    printf("Result: sin(%.2lf°) = %.6lf\n", num1, result);
                }
                break;
                
            case 10: // Cosine
                if (read_double("Enter angle in degrees: ", &num1)) {
                    result = cosine(num1);
                    printf("Result: cos(%.2lf°) = %.6lf\n", num1, result);
                }
                break;
                
            case 11: // Tangent
                if (read_double("Enter angle in degrees: ", &num1)) {
                    // Check for angles where tangent is undefined (90°, 270°, etc.)
                    if (fmod(fabs(num1), 180) == 90) {
                        printf("Error: Tangent is undefined for this angle.\n");
                    } else {
                        result = tangent(num1);
                        printf("Result: tan(%.2lf°) = %.6lf\n", num1, result);
                    }
                }
                break;
                
            default:
                printf("Invalid choice! Please try again.\n");
                break;
        }
        
        printf("\nPress Enter to continue...");
        clear_input_buffer();
    }
    
    return 0;
}