#include <stdio.h>

int main()
{
    int book_id[100];
    char book_name[100][50];
    char author[100][50];
    int choice, n = 0, i, search;

    while(1)
    {
        printf("\n\n--- Mini Library System ---");
        printf("\n1. Add Book");
        printf("\n2. Display Books");
        printf("\n3. Search Book");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter book id: ");
                scanf("%d", &book_id[n]);

                printf("Enter book name: ");
                scanf("%s", book_name[n]);

                printf("Enter author name: ");
                scanf("%s", author[n]);

                n++;

                printf("Book added successfully");
                break;


            case 2:
                printf("\n--- Book List ---");

                for(i = 0; i < n; i++)
                {
                    printf("\nBook ID: %d", book_id[i]);
                    printf("\nBook Name: %s", book_name[i]);
                    printf("\nAuthor: %s\n", author[i]);
                }

                break;


            case 3:
                printf("\nEnter book id to search: ");
                scanf("%d", &search);

                for(i = 0; i < n; i++)
                {
                    if(book_id[i] == search)
                    {
                        printf("\nBook Found");
                        printf("\nBook Name: %s", book_name[i]);
                        printf("\nAuthor: %s", author[i]);
                        break;
                    }
                }

                if(i == n)
                {
                    printf("Book not found");
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
