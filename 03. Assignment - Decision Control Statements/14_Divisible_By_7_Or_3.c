#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number :");
    scanf("%d", &a);
    if (a % 7 == 0 || a % 3 == 0)
        printf("Divisible by 7 or 3");
    else
        printf("Not Divisible by 7 or 3");
    return 0;
}
