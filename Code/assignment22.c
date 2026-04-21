#include <stdio.h>
#include <string.h>

int main() {
    char string1[100], string2[100], result[200];
    int choice;

    printf("Enter first string: ");
    scanf("%s", string1);
    
    printf("Enter second string: ");
    scanf("%s", string2);

    printf("\nMenu:\n");
    printf("1. String Length\n");
    printf("2. String Copy\n");
    printf("3. String Concatenation\n");
    printf("4. String Comparison\n");
    printf("5. String Reverse\n\n");
    printf("Choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Length of first string: %d\n", (int)strlen(string1));
            printf("Length of second string: %d\n", (int)strlen(string2));
            break;
            
        case 2:
            strcpy(result, string1);
            printf("Copied first string into a new variable: %s\n", result);
            break;
            
        case 3:
            strcpy(result, string1);
            strcat(result, string2);
            printf("Concatenated string: %s\n", result);
            break;
            
        case 4:
            if (strcmp(string1, string2) == 0) {
                printf("Result: The strings are identical.\n");
            } else {
                printf("Result: The strings are different.\n");
            }
            break;
            
        case 5:
            printf("Reversed first string: ");
            for (int i = strlen(string1) - 1; i >= 0; i--) {
                printf("%c", string1[i]);
            }
            printf("\n");
            break;
            
        default:
            printf("Invalid choice. Please enter a valid menu option (1, 2, 3, 4 or 5).\n");
    }

    return 0;
}