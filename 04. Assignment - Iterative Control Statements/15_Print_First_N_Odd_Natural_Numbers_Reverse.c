#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d ", &n);
    i = n;
    while (i >= 1)
    {
        printf("%d ", 2 * i - 1);
        i--;
    }
    return 0;
}