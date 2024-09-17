// Write a program to check whether two given numbers are co-prime numbers or not.

#include <stdio.h>

int main()
{
    int a, b, c, H;
    printf("Enter two Numbers: ");
    scanf("%d%d", &a, &b);

    for (H = a < b ? a : b; H >= 1; H--)
    {
        if (a % H == 0 && b % H == 0)
        {
            if (H == 1)
            {
                printf("Numbers are Co-prime\n");
            }
            else
            {
                printf("Not Co-prime\n");
            }
            break;
        }
    }

    return 0;
}