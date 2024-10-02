// Write a recursive function to print first N even natural numbers

#include <stdio.h>

void evenN(int);
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    evenN(n);

    return 0;
}

void evenN(int n)
{
    if (n == 1)
        printf("%d ", 2);
    else
    {
        evenN(n - 1);
        printf("%d ", 2 * n);
    }
}