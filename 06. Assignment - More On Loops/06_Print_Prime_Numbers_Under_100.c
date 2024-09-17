// Write a program to print all Prime numbers under 100.

#include <stdio.h>

int main()
{
    int a, i;
    for (a = 2; a <= 100; a++)
    {
        for (i = 2; i <= a - 1; i++)
            if (a % i == 0)
                break;

        if (i == a)
            printf("%d ", a);
    }

    return 0;
}