#include <stdio.h>

struct company
{
    char name[100];
    char address[100];
    int phone;
    int noOfEmployee;
};

int main()
{
    struct company c;

    printf("Enter company name: ");
    gets(c.name);

    printf("Enter address: ");
    gets(c.address);

    printf("Enter phone: ");
    scanf("%d", &c.phone);

    printf("Enter number of employees: ");
    scanf("%d", &c.noOfEmployee);

    printf("\nCompany Details:\n");
    printf("Name: %s\tAddress: %s\tPhone: %d\tNo. of Employees: %d\n", c.name, c.address, c.phone, c.noOfEmployee);

    return 0;
}