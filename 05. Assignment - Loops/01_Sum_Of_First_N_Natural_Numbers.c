#include <stdio.h>

int main()
{
    int n, sum, i;
    printf("Enter a Number: ");
    scanf("%d", &n);

    for (i = 1, sum = 0; i <= n; i++)
        sum = sum + i;
    printf("Sum of first %d natural numbers is: %d", n, sum);

    return 0;
}