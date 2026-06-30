#include <stdio.h>
int main()
{
    int arr[100], n, i, choice, element, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    do
    {
        printf("\n1. Display Array");
        printf("\n2. Insert Element");
        printf("\n3. Delete Element");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Array elements are:\n");
                for(i = 0; i < n; i++)
                {
                    printf("%d ", arr[i]);
                }
                break;
            case 2:
                printf("Enter position: ");
                scanf("%d", &pos);

                printf("Enter element: ");
                scanf("%d", &element);
                for(i = n; i > pos; i--)
                {
                    arr[i] = arr[i-1];
                }
                arr[pos] = element;
                n++;
                printf("Element inserted");
                break;
            case 3:
                printf("Enter position to delete: ");
                scanf("%d", &pos);
                for(i = pos; i < n-1; i++)
                {
                    arr[i] = arr[i+1];
                }
                n--;
                printf("Element deleted");
                break;
            case 4:
                printf("Exit");
                break;
            default:
                printf("Wrong choice");
        }
    } while(choice != 4);
    return 0;
}