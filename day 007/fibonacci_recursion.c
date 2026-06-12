#include<stdio.h>
void fibonacci(int n)
{
    int a=0,b=1,c,i;
    printf("fibonacci series\n");

    for(i=1;i<=n;i++)
    {
        printf("%d\t",a);
        c=a+b;
        a=b;
        b=c;
    }
}
int main()
{
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}
