#include <stdio.h>
#include <stdlib.h>
#include "calculator.h"

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
                printf("Enter first number: ");
                scanf("%lf", &num1);
                printf("Enter second number: ");
                scanf("%lf", &num2);
                result = add(num1, num2);
                printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
                break;
                
            case 2: // Subtraction
                printf("Enter first number: ");
                scanf("%lf", &num1);
                printf("Enter second number: ");
                scanf("%lf", &num2);
                result = subtract(num1, num2);
                printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
                break;
                
            case 3: // Multiplication
                printf("Enter first number: ");
                scanf("%lf", &num1);
                printf("Enter second number: ");
                scanf("%lf", &num2);
                result = multiply(num1, num2);
                printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
                break;
                
            case 4: // Division
                printf("Enter numerator: ");
                scanf("%lf", &num1);
                printf("Enter denominator: ");
                scanf("%lf", &num2);
                result = divide(num1, num2);
                if (num2 != 0) {
                    printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
                }
                break;
                
            case 5: // Power
                printf("Enter base: ");
                scanf("%lf", &num1);
                printf("Enter exponent: ");
                scanf("%lf", &num2);
                result = power(num1, num2);
                printf("Result: %.2lf ^ %.2lf = %.2lf\n", num1, num2, result);
                break;
                
            case 6: // Square Root
                printf("Enter number: ");
                scanf("%lf", &num1);
                result = square_root(num1);
                if (num1 >= 0) {
                    printf("Result: √%.2lf = %.2lf\n", num1, result);
                }
                break;
                
            case 7: // Factorial
                printf("Enter integer (0-20): ");
                scanf("%d", &integer_input);
                long fact_result = factorial(integer_input);
                if (fact_result != -1) {
                    printf("Result: %d! = %ld\n", integer_input, fact_result);
                }
                break;
                
            case 8: // Logarithm
                printf("Enter number: ");
                scanf("%lf", &num1);
                result = logarithm(num1);
                if (num1 > 0) {
                    printf("Result: ln(%.2lf) = %.2lf\n", num1, result);
                }
                break;
                
            case 9: // Sine
                printf("Enter angle in degrees: ");
                scanf("%lf", &num1);
                result = sine(num1);
                printf("Result: sin(%.2lf°) = %.2lf\n", num1, result);
                break;
                
            case 10: // Cosine
                printf("Enter angle in degrees: ");
                scanf("%lf", &num1);
                result = cosine(num1);
                printf("Result: cos(%.2lf°) = %.2lf\n", num1, result);
                break;
                
            case 11: // Tangent
                printf("Enter angle in degrees: ");
                scanf("%lf", &num1);
                result = tangent(num1);
                printf("Result: tan(%.2lf°) = %.2lf\n", num1, result);
                break;
                
            default:
                printf("Invalid choice! Please try again.\n");
                break;
        }
        
        printf("\nPress Enter to continue...");
        clear_input_buffer();
        getchar(); // Wait for user input
    }
    
    return 0;
}
