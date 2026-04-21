#include <stdio.h>

unsigned long long factorial_recursive(int n);
unsigned long long factorial_iterative(int n);

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error: Factorial of a negative number does not exist.\n");
    } else {
        printf("Factorial of %d through Recursive function: %llu\n", num, factorial_recursive(num));
        printf("Factorial of %d through Iterative function: %llu\n", num, factorial_iterative(num));
    }

    return 0;
}

unsigned long long factorial_recursive(int n) {
    if (n <= 1) return 1;
    return n * factorial_recursive(n - 1);
}

unsigned long long factorial_iterative(int n) {
    unsigned long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}