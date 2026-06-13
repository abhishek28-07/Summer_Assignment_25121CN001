#include <stdio.h>
int main()
{
    int arr[100];
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements of array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The elements of array are:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}