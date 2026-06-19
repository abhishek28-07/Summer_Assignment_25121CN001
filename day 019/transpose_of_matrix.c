#include <stdio.h>
int main()
{
    int a[10][10],i, j, r, col;
    printf("Enter number of rows and columns: ");
    scanf("%d%d", &r, &col);
    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Transpose of matrix:\n");
    for(i = 0; i < col; i++)
    {
        for(j = 0; j < r; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
    return 0;
}