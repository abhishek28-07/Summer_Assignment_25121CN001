#include <stdio.h>
int main()
{
    int choice;
    float balance = 0;
    float money;
    while(1)
    {
        printf("\nBank Account System\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &money);

                balance = balance + money;

                printf("Money Deposited\n");
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &money);

                if(money <= balance)
                {
                    balance = balance - money;
                    printf("Money Withdrawn\n");
                }
                else
                {
                    printf("Insufficient Balance\n");
                }
                break;

            case 3:
                printf("Your Balance is: %.2f\n", balance);
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