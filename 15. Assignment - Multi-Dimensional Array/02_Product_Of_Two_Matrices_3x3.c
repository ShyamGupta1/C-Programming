// Write a program to calculate the product of two matrices each of order 3x3.

#include <stdio.h>

int main()
{
    int i, j, arr1[3][3], arr2[3][3], product[3][3];
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
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            int sum = 0;
            for (int k = 0; k < 3; k++)
                sum = sum + arr1[i][k] * arr2[k][j];
            product[i][j] = sum;
        }
    // Print array
    printf("Product of two matrices:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", product[i][j]);
        }
        printf("\n\n");
    }

    return 0;
}