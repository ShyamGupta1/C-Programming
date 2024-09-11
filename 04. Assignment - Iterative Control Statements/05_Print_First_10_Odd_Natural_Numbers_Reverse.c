#include <stdio.h>

int main()
{
    int i = 10;

    while (i > 0)
    {
        printf("%d ", 2 * i - 1);
        i--;
    }
    return 0;
}