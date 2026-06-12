#include<stdio.h>

int Palindrome(int n)
{
    int rev = 0, temp;
    temp = n;
    while(n != 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    if(temp == rev)
        return 1;
    else
        return 0;
}
int main()
{
    int num;
    printf("Enter a number ");
    scanf("%d",&num);
    if(Palindrome(num))
        printf("Palindrome number");
    else
        printf("Not a palindrome number");

    return 0;
}