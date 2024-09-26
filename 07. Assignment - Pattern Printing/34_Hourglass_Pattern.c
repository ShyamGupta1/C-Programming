#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    for (int row = 1; row <= n; row++)
    {
        // Spaces
        for (int col = 1; col <= row - 1; col++)
            printf("  ");
        // Stars
        for (int col = 2 * n - (2 * row - 1); col >= 1; col--)
            printf("* ");
        printf("\n");
    }
    for (int row = 1; row <= n - 1; row++)
    {
        // Spaces
        for (int col = 1; col <= n - 1 - row; col++)
            printf("  ");
        // Stars
        for (int col = 1; col <= 2 * row + 1; col++)
            printf("* ");
        printf("\n");
    }

    return 0;
}