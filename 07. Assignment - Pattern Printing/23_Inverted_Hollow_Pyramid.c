#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row - 1; col++)
            printf("  ");
        for (int col = 2 * n - (2 * row - 1); col >= 1; col--)
        {
            if (col == 2 * n - (2 * row - 1) || col == 1 || row == 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}