#include <stdio.h>

int main()
{
    int arr[100], n, i,sum = 0, total;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter %d numbers\n", n - 1);
    for(i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    total = n * (n + 1) / 2;
    printf("Missing number is: %d", total - sum);
    return 0;
}