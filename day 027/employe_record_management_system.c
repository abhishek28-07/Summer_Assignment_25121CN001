#include <stdio.h>
struct employee
{
    int id;
    char name[50];
    float salary;
};
int main()
{
    struct employee e[100];
    int n, i;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of employee %d\n", i + 1);

        printf("Enter employee id: ");
        scanf("%d", &e[i].id);

        printf("Enter employee name: ");
        scanf("%s", e[i].name);

        printf("Enter salary: ");
        scanf("%f", &e[i].salary);
    }
    printf("\nEmployee Records\n");
    for(i = 0; i < n; i++)
    {
        printf("\nEmployee ID: %d", e[i].id);
        printf("\nName: %s", e[i].name);
        printf("\nSalary: %.2f\n", e[i].salary);
    }
    return 0;
}