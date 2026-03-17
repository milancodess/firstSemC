#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second  number: ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("Larger number = %d", a);
    }
    else if (b > a)
    {
        printf("Larger number = %d", b);
    }
    else
    {
        printf("Both numbers are equal");
    }

    return 0;
}
