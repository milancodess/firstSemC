#include <stdio.h>

struct employee
{
    int id;
    char name[100];
    char address[100];
    float salary;
};

int main()
{
    FILE *fp;
    struct employee e;
    int i, n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Write to file
    fp = fopen("employee.txt", "w");

    for (i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &e.id);

        printf("Enter Name: ");
        scanf(" %[^\n]", e.name);

        printf("Enter Address: ");
        scanf(" %[^\n]", e.address);

        printf("Enter Salary: ");
        scanf("%f", &e.salary);

        fprintf(fp, "%d %s %s %.2f\n", e.id, e.name, e.address, e.salary);
    }

    fclose(fp);

    fp = fopen("employee.txt", "r");

    printf("\nEmployee Records:\n");
    while (fscanf(fp, "%d %s %s %f", &e.id, e.name, e.address, &e.salary) != EOF)
    {
        printf("ID: %d, Name: %s, Address: %s, Salary: %.2f\n",
               e.id, e.name, e.address, e.salary);
    }

    fclose(fp);

    return 0;
}