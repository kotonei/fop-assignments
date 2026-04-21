#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));

  printf("Enter how many random numbers you want: ");

  int randomNumbersAmount;
  scanf("%d", &randomNumbersAmount);

  printf("Pseudo Random Numbers:\n");

  for (int i = 0; i < randomNumbersAmount; i++) {
    printf("%d\n", rand());
  }
}