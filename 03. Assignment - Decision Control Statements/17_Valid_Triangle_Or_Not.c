#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the length of the sides of a triangle: ");
    scanf("%d%d%d", &a, &b, &c);
    printf(a + b > c && b + c > a && c + a > b ? "Valid triangle" : "Not a valid triangle");

    return 0;
}