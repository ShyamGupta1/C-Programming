#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    for (int row = 1; row <= n; row++)
    {
        char name = 'A';
        for (int col = 1; col <= n - row; col++)
            printf("  ");
        for (int col = 1; col <= row; col++)
            printf("%c ", name + col - 1);
        for (char col = name + row - 1 - 1; col >= 'A'; col--)
            printf("%c ", col);
        printf("\n");
    }

    return 0;
}