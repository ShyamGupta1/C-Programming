#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 2; i <= n - 1; i++)
        if (n % i == 0)
            break;
    if (i == n)
        printf("Prime number");
    else
        printf("Not a Prime number");
    return 0;
}