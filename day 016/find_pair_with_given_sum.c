#include <stdio.h>
int main()
{
    int arr[100],n, i, j, target;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter target sum: ");
    scanf("%d", &target);
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == target)
            {
                printf("Pair found: %d and %d\n", arr[i], arr[j]);
            }
        }
    }
    return 0;
}