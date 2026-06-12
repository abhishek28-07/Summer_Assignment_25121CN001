#include<stdio.h>
int main()
{
    int n,d,i,binary=0,place=1,count=0;
    printf("enter a number to be converted ");
    scanf("%d",&n);
    while(n>0)
    {
        d=n%2;
        binary=binary+d*place;
        place=place*10;
        n=n/2;
    }
    printf("the binary is %d",binary);
    while(binary>0)
    {
        d=binary%10;
        if(d==1)
        {
            count=count+1;
        }
        binary=binary/10;
    }
    printf("\nthe set bits in a number is %d",count);
    
    return 0;
}