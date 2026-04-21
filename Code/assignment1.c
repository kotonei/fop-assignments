#include <stdio.h>
int main()
{
    int year;
    printf("Type a year: \n");
    scanf("%d", &year); // Scan the year and put it in variable year
    
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
      printf("This is a leap year."); // Display that the year is a leap year if it validates the if condition
    } else {
      printf("This is not a leap year."); // Otherwise, display that the year is not a leap year
    }
    return 0;
}