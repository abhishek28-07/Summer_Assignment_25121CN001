#include <stdio.h>
int main()
{
    char str1[100], str2[100];
    int freq[256] = {0},i;
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    for(i = 0; str1[i] != '\0'; i++)
    {
        freq[(int)str1[i]]++;
    }
    for(i = 0; str2[i] != '\0'; i++)
    {
        freq[(int)str2[i]]--;
    }
    for(i = 0; i < 256; i++)
    {
        if(freq[i] != 0)
        {
            printf("Not Anagram");
            return 0;
        }
    }
    printf("Anagram");
    return 0;
}