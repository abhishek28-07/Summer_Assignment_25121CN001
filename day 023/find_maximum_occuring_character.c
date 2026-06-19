#include <stdio.h>
int main()
{
    char str[100],maxChar;
    int freq[256] = {0},max=0,i;
    printf("Enter a string: ");
    scanf("%s", str);
    for(i = 0; str[i] != '\0'; i++)
    {
        freq[(int)str[i]]++;
    }
    for(i = 0; i < 256; i++)
    {
        if(freq[i] > max)
        {
            max = freq[i];
            maxChar = i;
        }
    }
    printf("Maximum occurring character = %c\n", maxChar);
    printf("Frequency = %d", max);
    return 0;
}