#include <stdio.h>
#include <math.h>

#define PI 3.14

int main()
{
    float r, h, volume;

    printf("Enter radius of the cylinder: ");
    scanf("%f", &r);

    printf("Enter height of the cylinder: ");
    scanf("%f", &h);

    volume = PI * r * r * h;

    printf("Volume = %.2f", volume);

    return 0;
}
