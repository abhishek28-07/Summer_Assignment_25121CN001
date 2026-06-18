#include<stdio.h>
int main()
{
    int n1,n2,i,arr1[100],arr2[100],arr3[200];
    printf("enter the size of first array ");
    scanf("%d",&n1);
    printf("enter the elements ");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("enter the size of second array ");
    scanf("%d",&n2);
    printf("enter the elements ");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<n1;i++)
    {
        arr3[i]=arr1[i];
    }
    for(i=0;i<n2;i++)
    {
        arr3[n1+i]=arr2[i];
    }
    printf("the merged array will be ");
    for(i = 0; i < n1 + n2; i++)
    {
        printf("%d ", arr3[i]);
    }
    return 0;
}