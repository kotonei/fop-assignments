#include <stdio.h>

void swapByValue(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swapping without pointers: a = %d b = %d\n", a, b);
}

void swapByReference(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int num1, num2;
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    x = num1;
    y = num2;

    swapByValue(num1, num2);

    swapByReference(&x, &y);
    
    printf("After swapping with pointers: x = %d y = %d\n", x, y);

    return 0;
}