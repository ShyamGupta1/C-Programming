// Write a program to find the Nth term of the Fibonnaci series.

#include <stdio.h>

int main()
{
    int a = -1, b = 1, c, n, i;
    printf("Enter Nth term: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    printf("%d", c);

    return 0;
}