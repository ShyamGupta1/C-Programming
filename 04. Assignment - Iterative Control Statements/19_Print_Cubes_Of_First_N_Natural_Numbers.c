#include <stdio.h>

int main()
{
    int n, i = 1;
    printf("Enter N: ");
    scanf("%d ", &n);
    while (i <= n)
    {
        printf("%d ", i * i * i);
        i++;
    }
    return 0;
}