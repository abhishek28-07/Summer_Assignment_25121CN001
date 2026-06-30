#include <stdio.h>
#include <string.h>

int main()
{
    int roll[100], marks[100];
    char name[100][50];
    int choice, n = 0, i, search;

    while(1)
    {
        printf("\n\n--- Student Record System ---");
        printf("\n1. Add Student");
        printf("\n2. Display Students");
        printf("\n3. Search Student");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter roll number: ");
                scanf("%d", &roll[n]);

                printf("Enter student name: ");
                scanf("%s", name[n]);

                printf("Enter marks: ");
                scanf("%d", &marks[n]);

                n++;

                printf("Student record added");
                break;


            case 2:
                printf("\n--- Student Records ---");

                for(i = 0; i < n; i++)
                {
                    printf("\nRoll Number: %d", roll[i]);
                    printf("\nName: %s", name[i]);
                    printf("\nMarks: %d\n", marks[i]);
                }

                break;


            case 3:
                printf("\nEnter roll number to search: ");
                scanf("%d", &search);

                for(i = 0; i < n; i++)
                {
                    if(roll[i] == search)
                    {
                        printf("\nStudent Found");
                        printf("\nName: %s", name[i]);
                        printf("\nMarks: %d", marks[i]);
                        break;
                    }
                }

                if(i == n)
                {
                    printf("Student not found");
                }

                break;


            case 4:
                return 0;


            default:
                printf("Invalid choice");
        }
    }

    return 0;
}