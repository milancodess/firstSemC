#include <stdio.h>

int main()
{
    int n, digit, reverse = 0;
    int original;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Invalid number.\n");
        return 0;
    }

    original = n;

    while (n > 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if (original == reverse)
        printf("Number is palindrome.");
    else
        printf("Number is palindrome.");

    return 0;
}
