// Write a recursive function to calculate sum of first N odd natural number

#include <stdio.h>

int sum_Odd_N(int);
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    printf("%d", sum_Odd_N(n));
    return 0;
}

int sum_Odd_N(int n)
{
    if (n > 0)
        return 2 * n - 1 + sum_Odd_N(n - 1);
}
