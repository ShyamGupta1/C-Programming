/*
a b c d e
a b c d e
a b c d e
a b c d e
a b c d e
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    for (int row = 1; row <= n; row++)
    {
        char name = 'a';
        for (int col = 1; col <= n; col++)
            printf("%c ", name + col - 1);

        printf("\n");
    }

    return 0;
}