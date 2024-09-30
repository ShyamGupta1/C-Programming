// Write a program in C to accept a matrix and determine whether it is a sparse matrix.

#include <stdio.h>

int main()
{
    int i, j, count = 0, arr[3][3];
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
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            if (arr[i][j] == 0)
                count++;
        }
    printf(count >= 5 ? "It is a sparse matrix" : "It is not a sparse matrix");

    return 0;
}