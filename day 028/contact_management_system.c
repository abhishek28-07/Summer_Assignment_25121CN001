#include <stdio.h>
int main()
{
    int choice;
    char name[20],phone[15];
    while(1)
    {
        printf("\nContact Management System\n");
        printf("1. Add Contact\n");
        printf("2. Display Contact\n");
        printf("3. Delete Contact\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter Name: ");
                scanf("%s", name);

                printf("Enter Phone Number: ");
                scanf("%s", phone);

                printf("Contact Added Successfully\n");
                break;

            case 2:
                printf("Name: %s\n", name);
                printf("Phone Number: %s\n", phone);
                break;

            case 3:
                name[0] = '\0';
                phone[0] = '\0';

                printf("Contact Deleted Successfully\n");
                break;

            case 4:
                printf("Thank You");
                return 0;

            default:
                printf("Invalid Choice\n");
        }
    }

    return 0;
}