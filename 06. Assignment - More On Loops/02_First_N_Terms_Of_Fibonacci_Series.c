// Write a program to print first N terms of Fibonacci series.
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, and so on.

#include <stdio.h>

int main()
{
    int a = -1, b = 1, c, n, i;
    printf("Enter Number of terms you want to print: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d ", c);
    }

    return 0;
}