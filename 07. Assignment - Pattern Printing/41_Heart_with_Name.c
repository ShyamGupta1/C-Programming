#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    for (int row = 1; row <= n - 2; row++)
    {
        // Spaces
        for (int col = 1; col <= n - row - 2; col++)
            printf("  ");
        // stars
        for (int col = 1; col <= (2 * row - 1) + 4; col++)
            printf("* ");

        // spaces
        for (int col = 2 * n - (2 * row - 1) - 4; col >= 1; col--)
            printf("  ");
        // stars
        for (int col = 1; col <= (2 * row - 1) + 4; col++)
            printf("* ");

        printf("\n");
    }
    for (int col = 1; col <= 2 * n - 3; col++)
        printf("* ");
    printf("S H Y A M ");
    for (int col = 1; col <= 2 * n - 3; col++)
        printf("* ");
    printf("\n");

    for (int row = 1; row <= (2 * n - 1); row++)
    {
        for (int col = 1; col <= row; col++)
            printf("  ");
        for (int col = (4 * n - 2) - (2 * row - 1); col >= 1; col--)
            printf("* ");
        printf("\n");
    }

    return 0;
}