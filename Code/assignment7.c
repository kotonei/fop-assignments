#include <stdio.h>

// Define the structure to hold student data
struct Student {
    int roll_no;
    char name[50];
    float marks[3];
    float total;
    float percentage;
};

int main() {
    int n;

    // Prompt for the number of students
    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input for number of students.\n");
        return 1;
    }

    // Declare an array of structures
    struct Student students[n];

    // Accept details for each student
    for (int i = 0; i < n; i++) {
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        
        printf("Name: ");
        scanf("%49s", students[i].name); 
        
        printf("Marks in 3 subjects: ");
        scanf("%f %f %f", &students[i].marks[0], &students[i].marks[1], &students[i].marks[2]);
        
        // Calculate total and percentage immediately after input
        students[i].total = students[i].marks[0] + students[i].marks[1] + students[i].marks[2];
        students[i].percentage = students[i].total / 3.0f;
    }

    printf("\nStudent Result:\n");
    for (int i = 0; i < n; i++) {
        printf("Roll No: %d\n", students[i].roll_no);
        printf("Name: %s\n", students[i].name);
        printf("Total Marks: %.2f\n", students[i].total);
        printf("Percentage: %.2f%%\n", students[i].percentage); 
        
        // Add a blank line between students if there is more than one
        if (i < n - 1) {
            printf("\n");
        }
    }

    return 0;
}