// Write a recursive function to print first N odd natural number

#include <stdio.h>

void oddN(int);
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    oddN(n);

    return 0;
}

void oddN(int n)
{
    if (n == 1)
        printf("1 ");
    else
    {
        oddN(n - 1);
        printf("%d ", 2 * n - 1);
    }
}