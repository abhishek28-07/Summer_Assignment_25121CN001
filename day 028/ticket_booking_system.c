#include <stdio.h>
int main()
{
    int choice,ticket = 0;
    while(1)
    {
        printf("\nTicket Booking System\n");
        printf("1. Book Ticket\n");
        printf("2. Cancel Ticket\n");
        printf("3. Check Ticket\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                ticket = 1;
                printf("Ticket Booked Successfully\n");
                break;

            case 2:
                if(ticket == 1)
                {
                    ticket = 0;
                    printf("Ticket Cancelled Successfully\n");
                }
                else
                {
                    printf("No Ticket Booked\n");
                }
                break;

            case 3:
                if(ticket == 1)
                {
                    printf("Ticket is Booked\n");
                }
                else
                {
                    printf("No Ticket Available\n");
                }
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