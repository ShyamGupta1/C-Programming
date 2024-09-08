#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    a %= 10;
    printf("%d", a);
    printf("\n");
    return 0;
}