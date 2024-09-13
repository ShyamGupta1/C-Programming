#include <stdio.h>

int main()
{
    int n, i = 0;
    printf("Enter value of N: ");
    scanf("%d ", &n);

    while (i < n)
    {
        printf("%d ", 2 * n + 1);
        i++;
    }
    return 0;
}