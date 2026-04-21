#include <stdio.h>
int main()
{
    printf("Enter an integer to generate multiplication tables for: \n");
    
    int entered;
    scanf("%d", &entered);
    
    int i;
    for (i = 1; i < 11; i++) {
      printf("%d x %d = %d\n", entered, i, entered * i);
      if (i == 10) {
        break;
      }
    }
    return 0;
}