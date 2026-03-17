#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, digit, reverse = 0;
    int original;

    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;
    n = abs(n);

    while (n > 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if (original < 0)
        reverse = -reverse;

    printf("Reversed number: %d\n", reverse);

    return 0;
}
