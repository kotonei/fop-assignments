#include <stdio.h>

int main() {
    int num1, num2, choice;
    int i, min, scd, gcd;

    // Accept two numbers from the user
    printf("Enter Number 1: ");
    scanf("%d", &num1);
    printf("Enter Number 2: ");
    scanf("%d", &num2);

    // Check to make sure numbers are positive
    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive numbers only.\n");
        return 0;
    }

    // Menu
    do {
        printf("\n1. Find Smallest Common Divisor (SCD)\n");
        printf("2. Find Greatest Common Divisor (GCD)\n");
        printf("3. Compute Both\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Find the smaller of the two numbers to know where to stop our loops
        if (num1 < num2) {
            min = num1;
        } else {
            min = num2;
        }

        if (choice == 1) {
            // Find Smallest Common Divisor
            scd = -1; // -1 means we haven't found one yet
            
            // Start checking from 2 and go up
            for (i = 2; i <= min; i++) {
                if (num1 % i == 0 && num2 % i == 0) {
                    scd = i;
                    break; // Stop looking as soon as we find the smallest one
                }
            }

            if (scd != -1) {
                printf("\nSmallest Common Divisor (SCD): %d\n", scd);
            } else {
                printf("\nSmallest Common Divisor (SCD): None (other than 1)\n");
            }

        } else if (choice == 2) {
            // Find Greatest Common Divisor
            gcd = 1; // 1 is always a divisor
            
            // Start checking from the highest possible number and go down
            for (i = min; i >= 1; i--) {
                if (num1 % i == 0 && num2 % i == 0) {
                    gcd = i;
                    break; // Stop looking as soon as we find the biggest one
                }
            }
            
            printf("\nGreatest Common Divisor (GCD): %d\n", gcd);

        } else if (choice == 3) {

            // Find SCD
            scd = -1;
            for (i = 2; i <= min; i++) {
                if (num1 % i == 0 && num2 % i == 0) {
                    scd = i;
                    break;
                }
            }

            // Find GCD
            gcd = 1;
            for (i = min; i >= 1; i--) {
                if (num1 % i == 0 && num2 % i == 0) {
                    gcd = i;
                    break;
                }
            }

            // Print both
            printf("\n");
            if (scd != -1) {
                printf("Smallest Common Divisor (SCD): %d\n", scd);
            } else {
                printf("Smallest Common Divisor (SCD): None (other than 1)\n");
            }
            printf("Greatest Common Divisor (GCD): %d\n", gcd);

        } else if (choice == 4) {
            printf("\nExiting program.\n");
        } else {
            printf("\nInvalid choice, please try again.\n");
        }

    } while (choice != 4);

    return 0;
}