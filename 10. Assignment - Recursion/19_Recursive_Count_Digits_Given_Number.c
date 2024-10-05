// Write a program in C to count the digits of a given number using recursion

#include <stdio.h>

int count_digits(int);
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    if (n == 0)
        printf("1");
    else
        printf("%d", count_digits(n));
    return 0;
}

int count_digits(int n)
{
    if (n == 1)
        return 1;
    else
        return 1 + count_digits(n / 10);
}