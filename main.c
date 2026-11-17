
#include <stdio.h>

float calculateAverage(int marks[], int n)
{
    int i, sum = 0;

    for(i = 0; i < n; i++)
    {
        sum = sum + marks[i];
    }

    return (float)sum / n;
}

int main()
{
    int marks[5], i;
    float average;

    printf("Enter marks of 5 subjects:\n");

    for(i = 0; i < 5; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);

        if(marks[i] < 0 || marks[i] > 100)
        {
            printf("Invalid marks! Enter again.\n");
            i--;
        }
    }

    average = calculateAverage(marks, 5);

    printf("\nAverage Marks = %.2f\n", average);

    if(average >= 90)
        printf("Grade: A");
    else if(average >= 75)
        printf("Grade: B");
    else if(average >= 60)
        printf("Grade: C");
    else if(average >= 40)
        printf("Grade: D");
    else
        printf("Grade: Fail");

    return 0;
}
