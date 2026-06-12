#include<stdio.h>
void fibonacci(int n)
{
    int a = 0, b = 1, c, i;
    for(i = 1; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}
int main()
{
    int num;
    printf("Enter number of terms: ");
    scanf("%d",&num);
    fibonacci(num);
    return 0;
}