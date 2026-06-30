#include <stdio.h>
int main()
{
    int choice;
    float a, b, result;
    do
    {
        printf("\nCALCULATOR\n");
        printf("\n1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if(choice >= 1 && choice <= 4)
        {
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
        }
        switch(choice)
        {
            case 1:
                result = a + b;
                printf("Addition = %f", result);
                break;
            case 2:
                result = a - b;
                printf("Subtraction = %f", result);
                break;
            case 3:
                result = a * b;
                printf("Multiplication = %f", result);
                break;
            case 4:
                if(b != 0)
                    printf("Division = %f", a / b);
                else
                    printf("Cannot divide by zero");
                break;
            case 5:
                printf("Exit");
                break;
            default:
                printf("Invalid choice");
        }
    } while(choice != 5);
    return 0;
}