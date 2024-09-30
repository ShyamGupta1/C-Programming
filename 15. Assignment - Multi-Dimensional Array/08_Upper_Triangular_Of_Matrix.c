// Write a program in C to print or display an upper triangular matrix.

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
    // Print Upper Triangular Matrix
    printf("\nUpper Triangular Matrix\n\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (j >= i)
                printf("%5d", arr[i][j]);
            else
                printf("%5d", 0);
        }
        printf("\n\n");
    }

    return 0;
}