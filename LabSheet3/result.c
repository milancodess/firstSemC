#include <stdio.h>

int main()
{
    float marks, total = 0, percentage;
    int i = 1;
    int failed = 0;

    printf("Enter marks of 5 subjects:\n");

    while (i <= 5)
    {
        printf("Subject %d: ", i);
        scanf("%f", &marks);

        if (marks < 50)
        {
            failed = 1;
        }

        total += marks;
        i++;
    }

    if (failed)
    {
        printf("Failed\n");
    }
    else
    {
        percentage = (total / 500) * 100;
        printf("Total Marks = %.2f\n", total);
        printf("Percentage = %.2f%%\n", percentage);

        if (percentage >= 80)
            printf("Division = Distinction\n");
        else if (percentage >= 70)
            printf("Division = First Division\n");
        else if (percentage >= 60)
            printf("Division = Second Division\n");
        else if (percentage >= 50)
            printf("Division = Third Division\n");
    }

    return 0;
}
