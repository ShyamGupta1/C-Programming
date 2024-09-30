// Write a program in C to find the sum of left diagonals of a matrix.

#include <stdio.h>

int main()
{
    int i, j, sum = 0, arr[3][3];
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
    // Sum of Diagonal Elements
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            if (i + j == 2)
                sum = sum + arr[i][j];
        }
    printf("Sum is: %d", sum);

    return 0;
}