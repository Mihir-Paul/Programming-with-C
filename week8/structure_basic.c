#include <stdio.h>
#include <string.h>

struct Employee {
    int code;
    char name[50];
    char designation[50];
    float salary;
};

int main() {
    struct Employee emp;

    // Taking input
    printf("Enter Employee Code: ");
    scanf("%d", &emp.code);

    getchar();  // Clear newline from input buffer

    printf("Enter Employee Name: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    emp.name[strcspn(emp.name, "\n")] = '\0';

    printf("Enter Designation: ");
    fgets(emp.designation, sizeof(emp.designation), stdin);
    emp.designation[strcspn(emp.designation, "\n")] = '\0';

    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    // Displaying details
    printf("\n--- Employee Details ---\n");
    printf("Code        : %d\n", emp.code);
    printf("Name        : %s\n", emp.name);
    printf("Designation : %s\n", emp.designation);
    printf("Salary      : %.2f\n", emp.salary);

    return 0;
}
