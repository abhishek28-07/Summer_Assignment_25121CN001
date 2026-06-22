#include <stdio.h>
int main()
{
    char name[50];
    int roll;
    float m1, m2, m3, total, percentage;
    printf("Enter student name: ");
    scanf("%s", name);
    printf("Enter roll number: ");
    scanf("%d", &roll);
    printf("Enter marks of three subjects: ");
    scanf("%f %f %f", &m1, &m2, &m3);
    total = m1 + m2 + m3;
    percentage = total / 3;
    printf("\nMarksheet\n");
    printf("Name: %s\n", name);
    printf("Roll Number: %d\n", roll);
    printf("Subject 1: %f\n", m1);
    printf("Subject 2: %f\n", m2);
    printf("Subject 3: %f\n", m3);
    printf("Total Marks: %f\n", total);
    printf("Percentage: %f\n", percentage);
    if(percentage >= 40)
    {
        printf("Result: Pass");
    }
    else
    {
        printf("Result: Fail");
    }
    return 0;
}