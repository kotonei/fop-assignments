#include <stdio.h>

int main() {
    char operationSelected;
    float num1, num2, result;
    int i;

    printf("This program performs addition/subtraction/multiplication/division/powers/factorial.\nPlease enter (1-6) respectively to perform the operation: \n");
    scanf("%c", &operationSelected);

    switch(operationSelected) {
        case '1': // Addition
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = num1 + num2;
            printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
            break;

        case '2': // Subtraction
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = num1 - num2;
            printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
            break;

        case '3': // Multiplication
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = num1 * num2;
            printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
            break;

        case '4': // Division
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        case '5': // Power (x^y) implemented without math library
            printf("Enter base and exponent (e.g., 2 3): ");
            scanf("%f %f", &num1, &num2);
            result = 1;
            for (i = 0; i < (int)num2; i++) {
                result *= num1;
            }
            printf("Result: %.2f raised to the power %d = %.2f\n", num1, (int)num2, result);
            break;

        case '6': // Factorial (x!) using loops
            printf("Enter a number: ");
            scanf("%f", &num1);
            if (num1 < 0) {
                printf("Error: Factorial of negative numbers is not defined.\n");
            } else {
                result = 1;
                for (i = 1; i <= (int)num1; i++) {
                    result *= i;
                }
                printf("Result: %d! = %.2f\n", (int)num1, result);
            }
            break;

        default: // Handling invalid selections 
            printf("Invalid selection! Please enter a choice between 1 and 6.\n");
            break;
    }

    return 0;
}