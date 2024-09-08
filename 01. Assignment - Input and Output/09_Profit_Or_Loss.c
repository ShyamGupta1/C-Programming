#include <stdio.h>

int main()
{
    float cp, sp, profit;
    printf("Enter cost price and selling price: ");
    scanf("%f%f", &cp, &sp);
    profit = (sp - cp) * 25 / 12;
    printf("Profit is: %.2f", profit);
    printf("\n");
    return 0;
}