#include<stdio.h>
int Armstrong(int num)
{
    int original, rem, sum = 0;
    original = num;
    while(num != 0)
    {
        rem = num % 10;
        sum = sum + (rem * rem * rem);
        num = num / 10;
    }
    if(original == sum)
        return 1;
    else
        return 0;
}
int main()
{
    int number;
    printf("Enter a number ");
    scanf("%d",&number);
    if(Armstrong(number))
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");

    return 0;
}