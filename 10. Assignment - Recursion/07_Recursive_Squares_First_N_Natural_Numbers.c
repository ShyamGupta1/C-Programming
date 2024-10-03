// Write a recursive function to print squares of first N natural numbers

#include <stdio.h>

void squareN(int);
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);

    squareN(n);
    return 0;
}

void squareN(int n)
{
    if (n == 1)
        printf("1 ");
    else
    {
        squareN(n - 1);
        printf("%d ", n * n);
    }
}