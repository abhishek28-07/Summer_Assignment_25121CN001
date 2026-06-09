#include<stdio.h>
int main()
{
    int rows, space, i, j;
    printf("Enter rows");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        for(space=1; space<=rows-i; space++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%c", j+64);
        }
        for(j=i-1; j>=1; j--)
        {
            printf("%c", j+64);
        }
        printf("\n");
    }return 0;
}