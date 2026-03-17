#include <stdio.h>

int main()
{
    float c, f;
    int choice;

    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &c);
        f = (9.0 / 5.0) * c + 32;
        printf("Fahrenheit = %.2f", f);
    }
    else if (choice == 2)
    {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &f);
        c = (5.0 / 9.0) * (f - 32);
        printf("Celsius = %.2f", c);
    }
    else
    {
        printf("Invalid choice");
    }

    return 0;
}
