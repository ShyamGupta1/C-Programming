#include <stdio.h>

int main()
{
    int n;
    printf("Enter N: ");
    scanf("%d ", &n);
    for (int i = 2; i <= 2 * n; i += 2)
    {
        printf("%d ", i);
    }
    return 0;
}