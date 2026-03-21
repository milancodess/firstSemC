#include <stdio.h>

int search(int arr[], int key)
{
    int i;
    for (i = 0; i < 10; i++)
    {
        if (arr[i] == key)
            return i + 1;
    }
    return -1;
}

int main()
{
    int arr[10], i, key, pos;

    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter item to search: ");
    scanf("%d", &key);

    pos = search(arr, key);

    if (pos != -1)
    {
        printf("Item found at position %d\n", pos);
    }
    else
    {
        printf("Item not found\n");
    }

    return 0;
}