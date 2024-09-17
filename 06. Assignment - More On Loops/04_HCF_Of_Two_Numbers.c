// Write a program to calculate HCF of two numbers.

#include <stdio.h>

int main()
{
    int a, b, H;
    printf("Enter two Numbers: ");
    scanf("%d%d", &a, &b);

    for (H = a < b ? a : b; H >= 1; H--)
    {
        if (a % H == 0 && b % H == 0)
            break;
    }
    printf("HCF is: %d", H);
    return 0;
}