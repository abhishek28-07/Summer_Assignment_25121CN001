#include<stdio.h>
int main ()
{
    int a,b,i,j,flag;
    printf("enter the range to which the the primenumbers are printed");
    scanf("%d \n %d",&a,&b);
    for(i=a;i<b;i++)
    {
        flag = 1;

        if(i <= 1)
        {
            flag = 0;
        }
        else
        {
            for(j = 2; j < i; j++)
            {
                if(i % j == 0)
                {
                    flag = 0;
                    break;
                }
            }
        }

        if(flag == 1)
        {
            printf("%d ", i);
        }
    }

    return 0;
}