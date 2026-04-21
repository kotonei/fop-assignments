#include <stdio.h>

int main() {
    FILE *sourceFile, *destFile;
    char sourceFileName[100];
    char ch;

    printf("Enter the source file name: ");
    scanf("%99s", sourceFileName);

    sourceFile = fopen(sourceFileName, "r");
    destFile = fopen("destination.txt", "w");

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    fclose(sourceFile);
    fclose(destFile);

    printf("File copied successfully.\n");
    printf("Destination file destination.txt will contain:\n");

    destFile = fopen("destination.txt", "r");
    if (destFile != NULL) {
        while ((ch = fgetc(destFile)) != EOF) {
            putchar(ch);
        }
        fclose(destFile);
    }

    return 0;
}