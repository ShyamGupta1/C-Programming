#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        sum = sum + i * i * i;

    printf("Sum of cubes of first %d natural numbers is: %d", n, sum);

    return 0;
}