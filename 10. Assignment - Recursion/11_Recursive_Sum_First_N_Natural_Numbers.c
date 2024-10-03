// Write a recursive function to calculate sum of first N natural numbers

#include <stdio.h>

int sumN(int);
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    printf("%d", sumN(n));
    return 0;
}

int sumN(int n)
{

    if (n >= 1)
        return n + sumN(n - 1);
}

/*
int sumN(int n)
{

    if (n == 1)
        return 1;
    else
        return n + sumN(n - 1);
}
*/