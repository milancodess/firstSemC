#include <stdio.h>

int main()
{
    int choice;
    float a, b, result;

    printf("MENU\n");
    printf("----------------\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");
    printf("4. DIVIDE\n");
    printf("5. EXIT\n");

    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 4)
    {
        printf("Enter two numbers: ");
        scanf("%f %f", &a, &b);
    }

    switch (choice)
    {
    case 1:
        result = a + b;
        printf("Sum = %.2f\n", result);
        break;
    case 2:
        result = a - b;
        printf("Difference = %.2f\n", result);
        break;
    case 3:
        result = a * b;
        printf("Product = %.2f\n", result);
        break;
    case 4:
        if (b != 0)
        {
            result = a / b;
            printf("Quotient = %.2f\n", result);
        }
        else
        {
            printf("Error.\n");
        }
        break;
    case 5:
        printf("Exiting the program\n");
        break;
    default:
        printf("Invalid choice.\n");
    }

    return 0;
}
