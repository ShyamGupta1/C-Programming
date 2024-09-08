#include <stdio.h>

int main()
{
    float cp, sp, profit, loss;
    printf("Enter cost price and selling price: ");
    scanf("%f%f", &cp, &sp);
    profit = (sp - cp) / cp * 100;
    loss = (cp - sp) / cp * 100;
    if (sp >= cp)
        printf("Profit :%.2f %%", profit);
    else
        printf("Loss :%.2f %%", loss);
    return 0;
}