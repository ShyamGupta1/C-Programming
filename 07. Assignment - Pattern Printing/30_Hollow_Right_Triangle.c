#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            if (col == 1 || col == row || row == n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}