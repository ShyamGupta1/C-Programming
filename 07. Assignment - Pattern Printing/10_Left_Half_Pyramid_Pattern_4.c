/*
        A
      A B
    A B C
  A B C D
A B C D E
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
            printf("%c ", name + col - 1);
        printf("\n");
    }

    return 0;
}