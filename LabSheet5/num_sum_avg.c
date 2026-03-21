#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter the size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    float avg = (float)sum / n;

    printf("Numbers:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nSum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}