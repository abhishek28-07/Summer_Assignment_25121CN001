#include <stdio.h>
int main()
{
    int choice,book = 0;
    while(1)
    {
        printf("\nLibrary Management System\n");
        printf("1. Add Book\n");
        printf("2. Issue Book\n");
        printf("3. Return Book\n");
        printf("4. Display Book\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                book = 1;
                printf("Book Added Successfully\n");
                break;

            case 2:
                if(book == 1)
                {
                    book = 2;
                    printf("Book Issued Successfully\n");
                }
                else
                {
                    printf("No Book Available\n");
                }
                break;

            case 3:
                if(book == 2)
                {
                    book = 1;
                    printf("Book Returned Successfully\n");
                }
                else
                {
                    printf("Book is not Issued\n");
                }
                break;

            case 4:
                if(book == 0)
                {
                    printf("No Book in Library\n");
                }
                else if(book == 1)
                {
                    printf("Book is Available\n");
                }
                else
                {
                    printf("Book is Issued\n");
                }
                break;

            case 5:
                printf("Exit");
                return 0;

            default:
                printf("Invalid Choice\n");
        }
    }

    return 0;
}