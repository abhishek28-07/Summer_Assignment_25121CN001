#include <stdio.h>
int main()
{
    char str[100], rev[100];
    int i, j = 0, flag = 1;
    printf("Enter a string: ");
    scanf("%s", str);
    for(i = 0; str[i] != '\0'; i++);
    for(i = i - 1; i >= 0; i--)
    {
        rev[j] = str[i];
        j++;
    }
    rev[j] = '\0';
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != rev[i])
        {
            flag = 0;
            break;
        }
    }
    if(flag == 1)
        printf("Palindrome string");
    else
        printf("Not a palindrome string");

    return 0;
}