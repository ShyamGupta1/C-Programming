#include <stdio.h>

int main()
{
    int a;
    printf("Enter a three digit number: ");
    scanf("%d", &a);
    a = a % 10 * 100 + a / 10;
    printf("After Rotation: %d", a);
    return 0;
}
