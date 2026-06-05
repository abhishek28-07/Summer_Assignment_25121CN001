#include<stdio.h>
int main()
{
    int n, i,largest;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 2; i <= n; i++)
    { while(n % i == 0)
        {
            largest = i;
            n = n / i;
        }
    }
    printf("the largest prime factor is :%d",largest);

    return 0;
}