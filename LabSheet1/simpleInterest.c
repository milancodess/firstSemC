#include <stdio.h>

int main()
{
    float p, t, r, si;

    printf("Enter principal amount: ");
    scanf("%f", &p);

    printf("Enter time: ");
    scanf("%f", &t);

    printf("Enter rate of interest: ");
    scanf("%f", &r);

    si = (p * t * r) / 100;

    printf("Simple Interest: %.2f", si);

    return 0;
}
