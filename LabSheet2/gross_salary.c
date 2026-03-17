#include <stdio.h>

int main()
{
    float basic, hra, da, gross;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    hra = 0.20 * basic;
    da = 0.50 * basic;
    gross = basic + hra + da;

    printf("Gross Salary = %.2f", gross);

    return 0;
}
