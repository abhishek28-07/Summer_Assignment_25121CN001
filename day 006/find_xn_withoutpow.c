#include<stdio.h>
int main()
{
    int n,x,result=1,i;
    printf("enter the base number ");
    scanf("%d",&n);
    printf("enter the power number ");
    scanf("%d",&x);
    for(i=1;i<=n;i++)
    {
        result = result*x;
    }
    printf("the answer is %d",result);
    return 0;
}