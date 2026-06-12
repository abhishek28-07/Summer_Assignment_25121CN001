#include<stdio.h>
int main ()
{
    int n,i,sum=0;
    printf("enter the numbers");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum = sum + i;
    }
    printf("the sum of first n natural numbers is ",sum);
    return 0;
}