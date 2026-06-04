#include<stdio.h>
int main()
{
    int n,d,i,arm,temp;
    printf("enter the range ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    temp=i;
    arm=0;
    while(temp>0)
    {
        d = temp%10;
        arm= arm + d*d*d;
        temp=temp/10;
    }
        if(arm==i)
        {
            printf("%d ",arm);
        }
    }
    return 0;
}