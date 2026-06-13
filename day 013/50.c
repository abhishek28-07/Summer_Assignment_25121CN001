#include <stdio.h>
int main()
{
    int arr[100];
    int n, i, sum = 0;
    float average;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements of array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    average = sum / (float)n;
    printf("Sum of array = %d\n", sum);
    printf("Average of array = %.2f", average);

    return 0;
}