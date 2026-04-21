#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Enter a number: ");
    int number;
    scanf("%d", &number);

    if (number != 0) {
        printf("The reversed number is: ");
        while (number) {
            printf("%d", number % 10);
            number = abs(number);
            number /= 10;
        }
    } else {
        printf("The reversed number is: 0");
    }
    return 0;
}