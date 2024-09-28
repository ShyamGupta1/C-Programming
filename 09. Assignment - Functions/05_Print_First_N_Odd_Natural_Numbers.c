#include <stdio.h>
void odd_Numbers(int);
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    odd_Numbers(n);

    return 0;
}

void odd_Numbers(int n)
{

    for (int i = 1; i <= 2 * n; i += 2)
        printf("%d ", i);
}