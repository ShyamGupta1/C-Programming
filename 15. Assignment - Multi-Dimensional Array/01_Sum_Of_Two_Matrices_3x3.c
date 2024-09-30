// Write a program to calculate the sum of two matrices each of order 3x3.

#include <stdio.h>

int main()
{
    int i, j, arr1[3][3], arr2[3][3], sum[3][3];
    printf("Enter elements of 1st matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &arr1[i][j]);
        }
    printf("Enter elements of 2nd matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &arr2[i][j]);
        };
    // Sum of Matrices
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    // Print array
    printf("Sum of two matrices: ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n\n");
    }

    return 0;
}