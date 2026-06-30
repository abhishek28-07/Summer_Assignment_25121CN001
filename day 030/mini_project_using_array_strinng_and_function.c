#include <stdio.h>
#include <string.h>

int id[100], quantity[100];
float price[100];
char name[100][50];

int n = 0;

void addProduct()
{
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
}


void displayProduct()
{
    int i;

    if(n == 0)
    {
        printf("No products available");
    }
    else
    {
        printf("\n--- Product List ---");

        for(i = 0; i < n; i++)
        {
            printf("\nProduct ID: %d", id[i]);
            printf("\nName: %s", name[i]);
            printf("\nPrice: %f", price[i]);
            printf("\nQuantity: %d\n", quantity[i]);
        }
    }
}


void searchProduct()
{
    int i, search;

    printf("\nEnter product id to search: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++)
    {
        if(id[i] == search)
        {
            printf("\nProduct Found");
            printf("\nName: %s", name[i]);
            printf("\nPrice: %f", price[i]);
            printf("\nQuantity: %d", quantity[i]);
            return;
        }
    }

    printf("Product not found");
}


void sellProduct()
{
    int i, search, qty;

    printf("\nEnter product id: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++)
    {
        if(id[i] == search)
        {
            printf("Enter quantity to sell: ");
            scanf("%d", &qty);

            if(quantity[i] >= qty)
            {
                quantity[i] = quantity[i] - qty;
                printf("Product sold successfully");
            }
            else
            {
                printf("Not enough stock");
            }

            return;
        }
    }

    printf("Product not found");
}


int main()
{
    int choice;

    while(1)
    {
        printf("\n\n--- Mini Shop Management System ---");
        printf("\n1. Add Product");
        printf("\n2. Display Products");
        printf("\n3. Search Product");
        printf("\n4. Sell Product");
        printf("\n5. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addProduct();
                break;

            case 2:
                displayProduct();
                break;

            case 3:
                searchProduct();
                break;

            case 4:
                sellProduct();
                break;

            case 5:
                return 0;

            default:
                printf("Invalid choice");
        }
    }

    return 0;
}