#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number :");
    scanf("%d", &a);
    if (a % 6)
        printf("Not divisible by 3 and 2");
    else
        printf("Divisible by 2 and 3");
    return 0;
}