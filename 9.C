#include <stdio.h>
struct Employee {
    int id;
    char name[50];
    float salary;
};
void inputEmployee(struct Employee *emp) {
    printf("Enter Employee ID: ");
    scanf("%d", &emp->id);
    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp->name);  // Read full line including spaces
    printf("Enter Employee Salary: ");
    scanf("%f", &emp->salary);
}

void displayEmployee(struct Employee emp) {
    printf("\nEmployee ID: %d\n", emp.id);
    printf("Name       : %s\n", emp.name);
    printf("Salary     : %.2f\n", emp.salary);
}

int main() {
    struct Employee employees[5];
    int i;

    printf("Enter details of 5 employees:\n");

    for (i = 0; i < 5; i++) {
        printf("\nEmployee %d:\n", i + 1);
        inputEmployee(&employees[i]);
    }

    printf("\nEmployee Records:\n");

    for (i = 0; i < 5; i++) {
        displayEmployee(employees[i]);
    }

    return 0;
}
