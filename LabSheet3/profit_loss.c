#include <stdio.h>

int main()
{
    float cp, sp;

    printf("Enter Cost Price: ");
    scanf("%f", &cp);

    printf("Enter Selling Price: ");
    scanf("%f", &sp);

    if (sp > cp)
        printf("Profit = %.2f", sp - cp);
    else if (cp > sp)
        printf("Loss = %.2f", cp - sp);
    else
        printf("Neither Profit nor Loss");

    return 0;
}
