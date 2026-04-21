#include <stdio.h>

int main() {
  int noOfElements;
  printf("Enter number of elements: ");
  scanf("%d", &noOfElements);
  
  printf("Enter integers: ");
  
  int i, evenCounter = 0, oddCounter = 0, initialArray[noOfElements], evenArray[noOfElements], oddArray[noOfElements];
  
  for (i = 0; i < noOfElements; i++) {
    scanf("%d", &initialArray[i]);
  }
  
  for (i = 0; i < noOfElements; i++) {
    if (initialArray[i] % 2 == 0) {
      evenArray[evenCounter] = initialArray[i];
      evenCounter++;
    } else {
      oddArray[oddCounter] = initialArray[i];
      oddCounter++;
      }
  }
  
  printf("Even numbers are: ");
  for (i = 0; i < evenCounter; i++) {
    printf("%d ", evenArray[i]);
  }
  printf("\n");
  
  printf("Odd numbers are: ");
  for (i = 0; i < oddCounter; i++) {
    printf("%d ", oddArray[i]);
  }
  
  printf("\n");
  return 0;
}