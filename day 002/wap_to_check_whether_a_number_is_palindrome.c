#include<stdio.h>
int main ()
{
    int n,temp,d,rev=0;
    printf("enter the number to be checked");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        d=n%10;
        rev=rev*10 + d;
        n=n/10;
    }
    if(temp==rev)
    {
        printf("entered number is palindrome");
    }
    else
    {
        printf("it is not palindrome");
    }
    return 0;

}