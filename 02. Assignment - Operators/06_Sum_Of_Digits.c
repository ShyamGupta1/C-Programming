#include <stdio.h>

int main()
{
    int a, sum;
    printf("Enter a three digit number: ");
    scanf("%d", &a);
    sum = a % 10 + a / 10 % 10 + a / 100;
    printf("Sum of digits is: %d", sum);
    return 0;
}