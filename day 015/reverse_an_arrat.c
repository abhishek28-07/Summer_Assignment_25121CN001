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
    printf("the reverse array is ");
    for(i=n-1;i>=0;i--)
    {
       printf("%d\t",arr[i]);
    }
    return 0;
}