#include<stdio.h>
int main()
{
    int n,i=1,sum=0,temp;
    printf("enter a number to be checked ");
    scanf("%d",&n);
    temp=n;
    while(i<n)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
        i++;
    }
    if(sum==temp)
    {
        printf("this is perfect ");
    }
    else
    {
        printf("this isnt perfect number");
    }
    return 0;
}