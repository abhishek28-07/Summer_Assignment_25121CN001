#include <stdio.h>
int main()
{
    int id[100], quantity[100],choice, n = 0, i, search;
    float price[100];
    char name[100][50];
    while(1)
    {
        printf("\n\n--- Inventory Management System ---");
        printf("\n1. Add Product");
        printf("\n2. Display Products");
        printf("\n3. Search Product");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("\nEnter product id: ");
                scanf("%d", &id[n]);

                printf("Enter product name: ");
                scanf("%s", name[n]);

                printf("Enter product price: ");
                scanf("%f", &price[n]);

                printf("Enter product quantity: ");
                scanf("%d", &quantity[n]);

                n++;

                printf("Product added successfully");
                break;
            case 2:
                printf("\n--- Product List ---");
                for(i = 0; i < n; i++)
                {
                    printf("\nID: %d", id[i]);
                    printf("\nName: %s", name[i]);
                    printf("\nPrice: %.2f", price[i]);
                    printf("\nQuantity: %d\n", quantity[i]);
                }
                break;
            case 3:
                printf("\nEnter product id to search: ");
                scanf("%d", &search);
                for(i = 0; i < n; i++)
                {
                    if(id[i] == search)
                    {
                        printf("\nProduct Found");
                        printf("\nName: %s", name[i]);
                        printf("\nPrice: %.2f", price[i]);
                        printf("\nQuantity: %d", quantity[i]);
                        break;
                    }
                }
                if(i == n)
                {
                    printf("Product not found");
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