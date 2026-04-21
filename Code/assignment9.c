#include <stdio.h>
int main()
{
    printf("Enter a 3 digit integer to check whether or not it is an Armstrong number: \n");
    
    int entered;
    scanf("%d", &entered);
    
    int hundreds = entered / 100;
    int tens = (entered / 10) % 10;
    int units = entered % 10;
    
    int LHS = hundreds * hundreds * hundreds + tens * tens * tens + units * units * units;
    
    if (LHS == entered) {
        printf("%d is an Armstrong number.", entered);
    } else {
        printf("%d is not an Armstrong number.", entered);
    }
}