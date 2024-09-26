#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    for (int row = 1; row <= 1; row++)
    {
        for (int col = 1; col <= n; col++)
            printf("%d ", col);
        for (int col = n - 1; col >= 1; col--)
            printf("%d ", col);
        printf("\n");
    }
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n - (row - 1) - 1; col++)
            printf("%d ", col);
        for (int col = 1; col <= 2 * row - 1; col++)
            printf("  ");
        for (int col = n - (row - 1) - 1; col >= 1; col--)
            printf("%d ", col);
        printf("\n");
    }

    return 0;
}