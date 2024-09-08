#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a % 2)
        printf("Odd");
    else
        printf("Even");

    return 0;
}
