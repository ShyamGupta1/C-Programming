#include <stdio.h>

int check(int);
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    printf("%d", check(n));

    return 0;
}
int check(int a)
{
    return (a % 2 ? 0 : 1);
}