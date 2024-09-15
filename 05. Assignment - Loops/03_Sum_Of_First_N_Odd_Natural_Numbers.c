#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= 2 * n; i += 2)
        sum = sum + i;

    printf("Sum of first %d odd natural numbers is: %d", n, sum);

    return 0;
}