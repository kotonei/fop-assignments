#include <stdio.h>
int main()
{
    printf("This program performs addition/subtraction/multiplication/division.\nPlease enter 1 or 2 or 3 or 4 respectively to perform the operation: \n");
    
    int operationSelected;
    scanf("%d", &operationSelected);
    
    printf("Enter the 2 numbers: \n");
    
    float num1;
    float num2;
    scanf("%f %f", &num1, &num2);
    
    float result;
    
    if (operationSelected == 1) {
      result = num1 + num2;
      printf("Addition: %f", result);
    } else if (operationSelected == 2) {
      result = num1 - num2;
      printf("Subtraction: %f", result);
    } else if (operationSelected == 3) {
      result = num1 * num2;
      printf("Multiplication: %f", result);
    } else if (operationSelected == 4) {
      result = num1 / num2;
      printf("Division: %f", result);
    }
    return 0;
}