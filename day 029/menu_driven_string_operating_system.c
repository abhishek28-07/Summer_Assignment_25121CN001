#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    int choice, i, len;
    while(1)
    {
        printf("\n\n1. Find Length");
        printf("\n2. Copy String");
        printf("\n3. Add Two Strings");
        printf("\n4. Compare Strings");
        printf("\n5. Reverse String");
        printf("\n6. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter string: ");
                scanf("%s", str1);
                len = 0;
                while(str1[len] != '\0')
                {
                    len++;
                }

                printf("Length = %d", len);
                break;
            case 2:
                printf("Enter string: ");
                scanf("%s", str1);
                strcpy(str2, str1);
                printf("Copied string = %s", str2);
                break;
            case 3:
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                strcat(str1, str2);
                printf("New string = %s", str1);
                break;
            case 4:
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                if(strcmp(str1, str2) == 0)
                {
                    printf("Strings are same");
                }
                else
                {
                    printf("Strings are different");
                }
                break;
            case 5:
                printf("Enter string: ");
                scanf("%s", str1);
                len = strlen(str1);
                printf("Reverse = ");
                for(i = len - 1; i >= 0; i--)
                {
                    printf("%c", str1[i]);
                }
                break;
            case 6:
                return 0;
            default:
                printf("Wrong choice");
        }
    }
    return 0;
}