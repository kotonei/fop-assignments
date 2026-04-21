#include <stdio.h>
#include <string.h>

struct Employee
{
    char name[100];
    char designation[100];
    char gender[100];
    char dateOfJoining[100];
    float salary;
};

int countGenders(struct Employee arr[], int size) {
    int male = 0, female = 0;
    for (int i = 0; i < size; i++) {
        if (strcmp(arr[i].gender, "Male") == 0) {
            male++;
        } else {
            female++;
        }
    }
    printf("Male Employees = %d\n", male);
    printf("Female Employees = %d\n", female);
}

void salaryGreaterThan10000(struct Employee arr[], int size) {
    printf("Employees with salary greater than 10000: ");
    for (int i = 0; i < size; i++) {
        if (arr[i].salary > 10000) {
            printf("%s ", arr[i].name);
        }
    }
    printf("\n");
}

void asstManager(struct Employee arr[], int size) {
    printf("Employees with designation AsstManager: ");
    for (int i = 0; i < size; i++) {
        if (strcmp(arr[i].designation, "AsstManager") == 0) {
            printf("%s ", arr[i].name);
        }
    }
    printf("\n");
}

int main() {
    int noOfEmployees;
    printf("Enter number of employees: ");
    scanf("%d", &noOfEmployees);

    printf("Enter employee first name, designation, gender, date of joining, salary (separated by a space): \n");

    struct Employee employees[noOfEmployees];

    for (int i = 0; i < noOfEmployees; i++) {
        printf("Employee %d: ", i + 1);
        scanf("%s", &employees[i].name);
        scanf("%s", &employees[i].designation);
        scanf("%s", &employees[i].gender);
        scanf("%s", &employees[i].dateOfJoining);
        scanf("%f", &employees[i].salary);
    }

    printf("Total number of employees = %d\n", noOfEmployees);
    countGenders(employees, noOfEmployees);
    salaryGreaterThan10000(employees, noOfEmployees);
    asstManager(employees, noOfEmployees);

    return 0;
}