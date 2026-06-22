#include <stdio.h>
int main()
{
    int answer, score = 0;
    printf("Quiz Application\n");
    printf("\n1. What is the capital of India?");
    printf("\n1. Mumbai");
    printf("\n2. Delhi");
    printf("\n3. Kolkata");
    printf("\n4. Chennai");
    printf("\nEnter your answer: ");
    scanf("%d", &answer);
    if(answer == 2)
        score++;
    printf("\n2. Which language is used for C programming?");
    printf("\n1. Python");
    printf("\n2. Java");
    printf("\n3. C");
    printf("\n4. HTML");
    printf("\nEnter your answer: ");
    scanf("%d", &answer);
    if(answer == 3)
        score++;
    printf("\n3. How many days are there in a week?");
    printf("\n1. 5");
    printf("\n2. 6");
    printf("\n3. 7");
    printf("\n4. 8");
    printf("\nEnter your answer: ");
    scanf("%d", &answer);
    if(answer == 3)
        score++;
    printf("\nYour score is: %d/3", score);
    if(score == 3)
        printf("\nExcellent!");
    else if(score == 2)
        printf("\nGood!");
    else
        printf("\nTry again!");
    return 0;
}