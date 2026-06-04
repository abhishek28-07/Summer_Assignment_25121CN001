#include<stdio.h>
int main()
{
    int a,b,i,lcm;
    printf("entre two numbers :");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a*b;i++)
    {
        if(i%a==0 && i%b==0)
        {
            lcm=i;
            break;
        }
    }
    printf("the lcm of enterd number a and b is :%d",lcm);
    return 0;
}