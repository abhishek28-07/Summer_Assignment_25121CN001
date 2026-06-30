#include <stdio.h>

int main()
{
    int emp_id[100];
    float salary[100];
    char name[100][50];

    int choice, n = 0, i, search;

    while(1)
    {
        printf("\n\n--- Mini Employee Management System ---");
        printf("\n1. Add Employee");
        printf("\n2. Display Employees");
        printf("\n3. Search Employee");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter employee id: ");
                scanf("%d", &emp_id[n]);

                printf("Enter employee name: ");
                scanf("%s", name[n]);

                printf("Enter employee salary: ");
                scanf("%f", &salary[n]);

                n++;

                printf("Employee added successfully");
                break;


            case 2:
                printf("\n--- Employee Records ---");

                for(i = 0; i < n; i++)
                {
                    printf("\nEmployee ID: %d", emp_id[i]);
                    printf("\nName: %s", name[i]);
                    printf("\nSalary: %.2f\n", salary[i]);
                }

                break;


            case 3:
                printf("\nEnter employee id to search: ");
                scanf("%d", &search);

                for(i = 0; i < n; i++)
                {
                    if(emp_id[i] == search)
                    {
                        printf("\nEmployee Found");
                        printf("\nName: %s", name[i]);
                        printf("\nSalary: %.2f", salary[i]);
                        break;
                    }
                }

                if(i == n)
                {
                    printf("Employee not found");
                }

                break;


            case 4:
                return 0;


            default:
                printf("Invalid choice");
        }
    }

    return 0;
