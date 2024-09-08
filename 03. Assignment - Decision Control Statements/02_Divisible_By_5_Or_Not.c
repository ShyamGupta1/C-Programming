#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a % 5)
        printf("Not-Divisible by 5");
    else
        printf("Divisible by 5");
    return 0;
}
