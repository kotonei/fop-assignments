#include <stdio.h>
#include <math.h>

double factorial(int num) {
    double fact = 1.0;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int terms, i;
    double angle, sum = 0.0;
    int sign = 1;

    printf("Enter value of x (in radians): ");
    scanf("%lf", &angle);
    printf("Enter number of terms: ");
    scanf("%d", &terms);

    for (i = 1; i <= terms; i++) {
        int power = 2 * i - 1;
        double term = sign * pow(angle, power) / factorial(power);
        sum += term;
        sign = -sign;
    }

    printf("Sum of sine series = %lf\n", sum);

    return 0;
}