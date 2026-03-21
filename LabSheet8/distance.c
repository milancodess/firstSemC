#include <stdio.h>
#include <math.h>

struct point
{
    float x, y;
};

int main()
{
    struct point p1, p2;
    float distance;

    printf("Enter first point (x y): ");
    scanf("%f %f", &p1.x, &p1.y);

    printf("Enter second point (x y): ");
    scanf("%f %f", &p2.x, &p2.y);

    distance = sqrt((p2.x - p1.x) * (p2.x - p1.x) +
                    (p2.y - p1.y) * (p2.y - p1.y));

    printf("Distance = %.2f\n", distance);

    return 0;
}