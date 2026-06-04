#include<stdio.h>
int main ()
{
    int n,flag = 1,i;
    printf("enter the number to be checked");
    scanf("%d",&n);
    if(n<=1){
        flag=0;
    }
    else
    {
        for(i=2;i<n;i++)
        {
        if(n%i==0)
        {
            flag =0;
            break;
        }
        }
    }
    if(flag==1)
    {
        printf("entered number is prime");
    }
    else
    {
        printf("entered number is not prime");
    }
    return 0;
}