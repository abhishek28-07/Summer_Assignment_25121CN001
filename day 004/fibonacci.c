#include<stdio.h>
int main()
{
    int n,i,a=0,b=1,c;
    printf("enter the value till which fibonacci has to be print :");
    scanf("%d",&n);
    printf("fibonacci series :%d\t%d",a,b);
    for(i=2;i<=n;i++)
    {
        c = a + b;
        printf("\t%d",c);
        a=b;
        b=c;
    }
    return 0;
}