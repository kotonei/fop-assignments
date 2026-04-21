#include <stdio.h>
#include <string.h>

int main() {
    char string1[100], string2[100], reversedString[100];
    int len, i, j;

    printf("Enter a string: ");
    scanf("%s", string1);

    printf("Enter another string for equality check: ");
    scanf("%s", string2);

    len = strlen(string1);
    printf("\nLength of string = %d\n", len);

    for (i = len - 1, j = 0; i >= 0; i--, j++) {
        reversedString[j] = string1[i];
    }
    reversedString[j] = '\0';
    printf("Reversed string = %s\n", reversedString);

    if (strcmp(string1, reversedString) == 0) {
        printf("The string is a Palindrome\n");
    } else {
        printf("The string is not a Palindrome\n");
    }

    if (strcmp(string1, string2) == 0) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }

    if (strstr(string1, string2) != NULL) {
        printf("Substring found in main string\n");
    } else {
        printf("Substring not found in main string\n");
    }

    return 0;
}