#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d\n", &a);
    if (99 < a < 1000)
        printf("It's a three digit number");
    else
        printf("Not a three digit number");
    return 0;
}