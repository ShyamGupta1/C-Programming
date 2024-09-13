#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter N: ");
    scanf("%d", &n);
    i = n;
    while (i >= 1)
    {
        printf("%d ", i);
        i--;
    }
    return 0;
}
