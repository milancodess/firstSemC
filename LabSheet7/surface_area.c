#include <stdio.h>

int surfaceArea(int l, int b, int h)
{
    return 2 * (l * b + b * h + h * l);
}

int main()
{
    int l, b, h;

    printf("Enter length, breadth and height: ");
    scanf("%d %d %d", &l, &b, &h);

    printf("Surface Area = %d\n", surfaceArea(l, b, h));

    return 0;
}