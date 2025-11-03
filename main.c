#include "calculator.h"
#include <stdlib.h>

int main(void) {
    int choice;
    double a, b, result;
    int n;

    while (1) {
        display_menu();
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input.\n");
            clear_input_buffer();
            continue;
        }

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                printf("Result: %.6lf\n", add(a, b));
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                printf("Result: %.6lf\n", subtract(a, b));
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                printf("Result: %.6lf\n", multiply(a, b));
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &a, &b);
                printf("Result: %.6lf\n", divide(a, b));
                break;

            case 5:
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &a, &b);
                printf("Result: %.6lf\n", power(a, b));
                break;

            case 6:
                printf("Enter a number: ");
                scanf("%lf", &a);
                printf("Result: %.6lf\n", square_root(a));
                break;

            case 7:
                printf("Enter an integer: ");
                scanf("%d", &n);
                printf("Result: %ld\n", factorial(n));
                break;

            case 8:
                printf("Enter a number: ");
                scanf("%lf", &a);
                printf("Result: %.6lf\n", logarithm(a));
                break;

            case 9:
                printf("Enter degrees: ");
                scanf("%lf", &a);
                printf("Result: %.6lf\n", sine(a));
                break;

            case 10:
                printf("Enter degrees: ");
                scanf("%lf", &a);
                printf("Result: %.6lf\n", cosine(a));
                break;

            case 11:
                printf("Enter degrees: ");
                scanf("%lf", &a);
                printf("Result: %.6lf\n", tangent(a));
                break;

            case 0:
                printf("Exiting calculator...\n");
                return 0;

            default:
                printf("Invalid choice. Try again.\n");
                break;
        }
    }

    return 0;
}