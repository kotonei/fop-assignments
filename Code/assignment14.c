#include <stdio.h>
#include <math.h>

int main() {
    printf("Enter a binary number to convert it to decimal number: ");
    unsigned long long number;
    int digit = 0, count = 0, valid = 1;
    unsigned long long result = 0;

    scanf("%llu", &number);

    while (number > 0) {
        digit = number % 10;
        if (digit == 1) {
            result += pow(2, count);
        } else if (digit != 0) {
            printf("This number is not a binary number.");
            valid = 0;
            break;
        }
        count++;
        number /= 10;
    }

    if (valid) {
        printf("The decimal number is: %llu\n", result);
    }
    return 0;
}