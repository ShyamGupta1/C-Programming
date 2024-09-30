// Write a program in C to find the sum of rows and columns of a Matrix.

#include <stdio.h>

int main()
{

    int i, j, arr[3][3];
    printf("Enter elements of matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    // Print Matrix
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            printf("%5d", arr[i][j]);
            if (j == 2)
                printf("\n\n");
        }

    for (i = 0; i < 4; i++)
    {
        int sum2 = 0, sum1 = 0;
        for (j = 0; j < 3; j++)
        {
            sum1 = sum1 + arr[i][j];
            sum2 = sum2 + arr[j][i];
        }
        printf("Sum of row %d, col %d:\t%d, %d\n", i + 1, i + 1, sum1, sum2);
    }

    return 0;
}