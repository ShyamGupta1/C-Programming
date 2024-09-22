#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    for (int row = 1; row <= n; row++)
    {
        // Spaces
        for (int col = 1; col <= n - row; col++)
            printf("  ");
        // Stars
        for (int col = 1; col <= n; col++)
            printf("* ");
        printf("\n");
    }

    return 0;
}