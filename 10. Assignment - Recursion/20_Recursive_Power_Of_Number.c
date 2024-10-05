// Write a program in C to calculate the power of any number using recursion

#include <stdio.h>

int pow_N(int, int);
int main()
{
    int base, exponent;
    printf("Enter base and Exponent: ");
    scanf("%d%d", &base, &exponent);
    if (base == 0)
        printf("0");
    else
        printf("%d", pow_N(base, exponent));
    return 0;
}
int pow_N(int base, int exp)
{
    if (exp > 1)
        return base * pow_N(base, exp - 1);
}