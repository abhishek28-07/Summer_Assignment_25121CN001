#include<stdio.h>
int Perfect(int num)
{
    int sum = 0, i;
    for(i = 1; i < num; i++)
    {
        if(num % i == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == num)
        return 1;
    else
        return 0;
}
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    if(checkPerfect(number))
        printf("Perfect number");
    else
        printf("Not a perfect number");

    return 0;
}