#include <stdio.h>

int reverse(int n)
{
    int rev = 0;

    while (n != 0)
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    return rev;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Reversed number = %d\n", reverse(n));

    return 0;
}