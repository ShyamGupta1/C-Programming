// Write a recursive function to calculate sum of digits of a given number

#include <stdio.h>

int sum_Of_Digits(int);
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    printf("%d", sum_Of_Digits(n));

    return 0;
}

int sum_Of_Digits(int n)
{
    if (n > 0)
        return n % 10 + sum_Of_Digits(n / 10);
}
