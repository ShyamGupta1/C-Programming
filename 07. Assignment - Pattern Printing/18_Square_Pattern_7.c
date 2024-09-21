/*
a a a a a
b b b b b
c c c c c
d d d d d
e e e e e
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    for (int row = 1; row <= n; row++)
    {
        char name = 'a' + (row - 1);
        for (int col = 1; col <= n; col++)
            printf("%c ", name);

        printf("\n");
    }

    return 0;
}