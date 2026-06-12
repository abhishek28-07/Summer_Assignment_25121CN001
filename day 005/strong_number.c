#include<stdio.h>
int main()
{
    int n,i,d,sum=0,temp,fact;
    printf("enter a number to be checked");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        d = n%10;
        fact=1;
    for(i=1;i<=d;i++)
    {
    fact=fact*i;
    }
    sum=sum+fact;
    n=n/10;
}
if(sum==temp)
{
    printf("this is strong number");
}
else
{
printf("this is not strong number");
}

    return 0;
}