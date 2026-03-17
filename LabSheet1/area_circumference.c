#include <stdio.h>
#include <math.h>

#define PI 3.14

int main()
{
    float r, area, circumference;

    printf("Enter radius of the circle: ");
    scanf("%f", &r);

    area = PI * pow(r, 2);
    circumference = 2 * PI * r;

    printf("Area of circle: %.2f\n", area);
    printf("Circumference: %.2f", circumference);

    return 0;
}
