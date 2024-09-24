#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            if (row == 1 || col == 1 || row == n || col == n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}