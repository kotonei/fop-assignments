#include <stdio.h>
int main()
{
    printf("Enter marks of the 5 courses taken by a student separated by a space: \n");
    
    int subject1, subject2, subject3, subject4, subject5;
    scanf("%d %d %d %d %d", &subject1, &subject2, &subject3, &subject4, &subject5);
    
    int total = subject1 + subject2 + subject3 + subject4 + subject5;
    float percentage = ((float) total / 500) * 100;
    
    printf("Total Marks = %d\n", total);
    
    if (subject1 >= 40 && subject2 >= 40 && subject3 >= 40 && subject4 >= 40 && subject5 >= 40) {
      printf("Percentage = %.2f%%\n", percentage);
      printf("Result: PASS\n");
      if (percentage >= 75.0f) {
        printf("Grade: Distinction\n");
      } else if (percentage >= 60.0f && percentage < 75.0f) {
        printf("Grade: First Division\n");
      } else if (percentage >= 50.0f && percentage < 60.0f) {
        printf("Grade: Second Division\n");
      } else if (percentage >= 40.0f && percentage < 50.0f) {
        printf("Grade: Third Division\n");
      }
    } else {
      printf("Result: FAIL\n");
    }
  return 0;
}