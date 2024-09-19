/*
        1
      2 1
    3 2 1
  4 3 2 1
5 4 3 2 1
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    for (int row = 1; row <= n; row++)
    {
        char name = 'A';
        // Spaces
        for (int col = 1; col <= n - row; col++)
            printf("  ");
        // Numbers
        for (int col = 1; col <= row; col++)
            printf("%d ", row - col + 1);
        printf("\n");
    }

    return 0;
}