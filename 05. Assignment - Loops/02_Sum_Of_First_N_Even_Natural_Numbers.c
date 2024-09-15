#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter a Number: ");
    scanf("%d", &n);
    for (int i = 2; i <= 2 * n; i += 2)
        sum = sum + i;

    printf("Sum of first %d even natural numbers is: %d", n, sum);

    return 0;
}