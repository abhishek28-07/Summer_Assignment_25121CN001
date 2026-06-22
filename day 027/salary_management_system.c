#include <stdio.h>
int main()
{
    int id;
    char name[50];
    float salary, bonus, total;
    printf("Enter employee id: ");
    scanf("%d", &id);
    printf("Enter employee name: ");
    scanf("%s", name);
    printf("Enter basic salary: ");
    scanf("%f", &salary);
    printf("Enter bonus: ");
    scanf("%f", &bonus);
    total = salary + bonus;
    printf("\nSalary Details\n");
    printf("Employee ID: %d\n", id);
    printf("Employee Name: %s\n", name);
    printf("Basic Salary: %f\n", salary);
    printf("Bonus: %f\n", bonus);
    printf("Total Salary: %f", total);
    return 0;
}