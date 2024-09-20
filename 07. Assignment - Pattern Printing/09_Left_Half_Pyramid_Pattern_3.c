/*
        1
      1 2
    1 2 3
  1 2 3 4
1 2 3 4 5
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    for (int row = 1; row <= n; row++)
    {
        // Spaces
        for (int col = 1; col <= n - row; col++)
            printf("  ");
        // Numbers
        for (int col = 1; col <= row; col++)
            printf("%d ", col);
        printf("\n");
    }

    return 0;
}