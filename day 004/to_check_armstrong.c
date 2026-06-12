#include<stdio.h>
int main()
{
    int n, d, i, arm = 0, temp;
    printf("enter the number to check:");
    scanf("%d", &n);
    temp = n;
    while(n > 0)
    {
        d = n % 10;
        arm = arm + d*d*d;
        n = n / 10;
    }
    if(temp == arm)
    {
        printf("%d is an armstrong number", temp);
    }
    else
    {
        printf("%d is not an armstrong number", temp);
    }

    return 0;
}