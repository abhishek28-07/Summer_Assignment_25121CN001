#include <stdio.h>

int main()
{
    int arr[100],n, i, j,maxCount = 0,maxElement = arr[0];
    printf("Enter number of elements ");
    scanf("%d", &n);
    printf("Enter array elements\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++)
    {
        int count = 1;
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }
        if(count > maxCount)
        {
            maxCount = count;
            maxElement = arr[i];
        }
    }
    printf("Maximum frequency element %d\n", maxElement);
    printf("Frequency = %d", maxCount);
    return 0;
}