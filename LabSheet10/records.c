#include <stdio.h>

struct student
{
    int roll;
    char name[100];
    float marks;
};

int main()
{
    FILE *fp;
    struct student s;
    int i;

    fp = fopen("students.txt", "w");

    printf("Enter details of 10 students:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Student %d\n", i + 1);

        printf("Enter roll: ");
        scanf("%d", &s.roll);

        printf("Enter name: ");
        scanf(" %[^\n]", s.name);

        printf("Enter marks: ");
        scanf("%f", &s.marks);

        fprintf(fp, "%d %s %.2f\n", s.roll, s.name, s.marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");

    printf("\nStudent Records:\n");
    while (fscanf(fp, "%d %s %f", &s.roll, s.name, &s.marks) != EOF)
    {
        printf("Roll: %d, Name: %s, Marks: %.2f\n",
               s.roll, s.name, s.marks);
    }

    fclose(fp);

    return 0;
}