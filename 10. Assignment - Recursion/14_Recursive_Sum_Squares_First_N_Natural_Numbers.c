// Write a recursive function to calculate sum of squares of first n natural numbers

#include <stdio.h>

int sum_Squares_N(int);
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    printf("%d", sum_Squares_N(n));
    return 0;
}

int sum_Squares_N(int n)
{
    if (n >= 1)
        return n * n + sum_Squares_N(n - 1);
}