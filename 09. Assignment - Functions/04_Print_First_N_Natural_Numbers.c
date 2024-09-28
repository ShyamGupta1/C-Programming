#include <stdio.h>

void natural_Numbers(int);
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    natural_Numbers(n);

    return 0;
}

void natural_Numbers(int n)
{
    for (int i = 1; i <= n; i++)
        printf("%d ", i);
}