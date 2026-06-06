#include<stdio.h>
int main ()
{
    int n,d,decimal=0,place=1;
    printf("enter the binary number ");
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        decimal=decimal+d*place;
        place=place*2;
        n=n/10;
    }
    printf("the decimal number will be %d",decimal);
    return 0;
}