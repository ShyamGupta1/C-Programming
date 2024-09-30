// Write a program in C to find the transpose of a given matrix.

#include <stdio.h>

int main()
{
    int i, j, arr[3][3], transpose[3][3];
    printf("Enter elements of matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            transpose[i][j] = arr[j][i];
        }
    // Print array
    printf("Transpose of the given matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}