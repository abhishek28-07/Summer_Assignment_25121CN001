#include<stdio.h>
int main ()
{
    int n,d,product=1;
    printf("enter the number");
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        product=product*d;
        n=n/10;
    }
    printf("the multiplication of digits of the number is %d",product);
    return 0;
}
