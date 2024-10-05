// Write a function to calculate LCM of two numbers.

#include <stdio.h>

int LCM(int, int);
int main()
{
    int a, b;
    printf("Enter two Number: ");
    scanf("%d%d", &a, &b);
    printf("LCM is: %d", LCM(a, b));
    return 0;
}

int LCM(int a, int b)
{
    int L;
    for (L = (a > b ? a : b); L <= a * b; L++)
        if (L % a == 0 && L % b == 0)
            break;
    return L;
}
