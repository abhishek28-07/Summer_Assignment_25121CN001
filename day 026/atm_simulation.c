#include <stdio.h>
int main()
{
    int balance = 5000,choice, amount;
    printf("ATM Simulation\n");
    printf("1. Check Balance\n");
    printf("2. Withdraw Money\n");
    printf("3. Deposit Money\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            printf("Your balance is: %d", balance);
            break;
        case 2:
            printf("Enter amount to withdraw: ");
            scanf("%d", &amount);

            if(amount <= balance)
            {
                balance = balance - amount;
                printf("Please collect your money\n");
                printf("Remaining balance: %d", balance);
            }
            else
            {
                printf("Insufficient balance");
            }
            break;
        case 3:
            printf("Enter amount to deposit: ");
            scanf("%d", &amount);
            balance = balance + amount;
            printf("Money deposited successfully\n");
            printf("Updated balance: %d", balance);
            break;
        case 4:
            printf("Thank you for using ATM");
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}