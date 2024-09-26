#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    for (int row = 1; row <= n; row++)
    {
        // Inverted Pyramid
        for (int col = 1; col <= n - (row - 1); col++)
            printf("* ");
        // Spaces
        for (int col = 1; col <= 2 * (row - 1); col++)
            printf("  ");
        // Inverted Pyramind
        for (int col = 1; col <= n - (row - 1); col++)
            printf("* ");

        printf("\n");
    }

    return 0;
}