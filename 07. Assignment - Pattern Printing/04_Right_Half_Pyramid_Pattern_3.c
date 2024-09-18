/*
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
            printf("%d ", row);
        printf("\n");
    }

    return 0;
}