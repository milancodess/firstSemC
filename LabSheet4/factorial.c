#include <stdio.h>

int main()
{
    int n, i, fact = 1;

    printf("MILAN BHANDARI\n");
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Invalids.\n");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            fact *= i;
        }
        printf("Factorial: %d", fact);
    }

    return 0;
}
