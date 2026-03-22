#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter the size: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr;

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    ptr = arr;

    for (i = 0; i < n; i++)
    {
        sum += *(ptr + i);
    }

    printf("Sum = %d\n", sum);

    return 0;
}