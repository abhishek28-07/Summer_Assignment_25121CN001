#include<stdio.h>
int main ()
{
    int n,d,i,binary=0,place=1;
    printf("enter a number to be converted ");
    scanf("%d",&n);
    while(n>0)
    {
        d=n%2;
        binary=binary+d*place;
        place=place*10;
        n=n/2;
    }
    printf("the binary number is %d",binary);

    return 0;
}