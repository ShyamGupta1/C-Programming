// Write a recursive function to calculate sum of first N even natural number

#include <stdio.h>

int sum_even_N(int);
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    printf("%d", sum_even_N(n));
    return 0;
}

int sum_even_N(int n)
{
    if (n > 0)
        return 2 * n + sum_even_N(n - 1);
}