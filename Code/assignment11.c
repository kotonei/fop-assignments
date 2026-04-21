#include <stdio.h>
#include <math.h>

int main() {
    printf("Enter a number: \n");

    int entered;
    scanf("%d", &entered);

    printf("\n");
    printf("Enter a number (1-6) to perform the following operations: \n");
    printf("1) Calculate the square root of a number\n");
    printf("2) Calculate the square of a number\n");
    printf("3) Calculate the cube of a number\n");
    printf("4) Check whether a number is prime\n");
    printf("5) Calculate the factorial of a number\n");
    printf("6) Calculate the prime factors of a number\n\n");

    int operationSelected;
    scanf("%d", &operationSelected);

    switch (operationSelected) {
        case 1: {
            if (entered < 0) {
                printf("Error: Cannot calculate square root of a negative number.\n");
            } else {
                printf("The square root of this number is: %f\n", sqrt(entered));
            }
            break;
        }
        case 2:
            printf("The square of %d is: %d\n", entered, entered * entered);
            break;
        case 3:
            printf("The cube of %d is: %d\n", entered, entered * entered * entered);
            break;
        case 4: {
            int isPrime = 1;
            if (entered <= 1) { 
                isPrime = 0;
            }
            else {
                // Optimized to check divisibility up to n/2 
                for (int i = 2; i <= entered / 2; i++) {
                    if (entered % i == 0) {
                        isPrime = 0;
                        break;
                    }
                }
            }
            if (isPrime) {
                printf("%d is a prime number.\n", entered);
            }
            else {
                printf("%d is not a prime number.\n", entered);
            } 
            break;
        }
        case 5: {
            if (entered < 0) {
                printf("Error: Factorial of a negative number is undefined.\n");
            } else {
                unsigned long long fact = 1;
                for (int i = 1; i <= entered; i++) {
                    fact *= i;
                }
                printf("The factorial of %d is: %llu\n", entered, fact);
            }
            break;
        }

        case 6: {
            printf("Prime factors of %d are: ", entered);
            int temp = entered;
            for (int i = 2; i <= temp; i++) {
                while (temp % i == 0) {
                    printf("%d ", i);
                    temp /= i;
                }
            }
            printf("\n");
            break;
        }

        default:
            printf("Invalid selection. Please choose a number between 1 and 6.\n");
            break;
    }
    return 0;
}