#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void print_menu();

int main() {
    int choice;
    double num1, num2, result;

    do {
        print_menu();
        scanf("%d", &choice);

        if (choice == 8) {
            printf("Exiting the calculator. Goodbye!\n");
            break;
        }

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 + num2;
                printf("The sum of %lf and %lf is %lf\n", num1, num2, result);
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 - num2;
                printf("The difference of %lf and %lf is %lf\n", num1, num2, result);
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 * num2;
                printf("The product of %lf and %lf is %lf\n", num1, num2, result);
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                if (num2 == 0) {
                    printf("Division by zero is not allowed\n");
                } else {
                    result = num1 / num2;
                    printf("The division of %lf and %lf is %lf\n", num1, num2, result);
                }
                break;
            case 5:
                printf("Enter a number: ");
                scanf("%lf", &num1);
                if (num1 < 0) {
                    printf("Square root of a negative number is not possible\n");
                } else {
                    result = sqrt(num1);
                    printf("The square root of %lf is %lf\n", num1, result);
                }
                break;
            case 6:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                if (num2 == 0) {
                    printf("Modulus by zero is not allowed\n");
                } else {
                    result = fmod(num1, num2);
                    printf("The modulus of %lf and %lf is %lf\n", num1, num2, result);
                }
                break;
            case 7:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = pow(num1, num2);
                printf("The power of %lf raised to %lf is %lf\n", num1, num2, result);
                break;
            default:
                printf("Invalid choice. Please choose a number between 1 and 8.\n");
                break;
        }
    } while (1);

    return 0;
}

void print_menu() {
    printf("\nWelcome to the world of Calculator\n");
    printf("Choose one of the following operations:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square Root\n");
    printf("6. Modulus\n");
    printf("7. Power\n");
    printf("8. Exit\n");
    printf("Enter your choice: ");
}
