// Write a program to find the maximum number between two numbers using a pointer

#include <stdio.h>

int find_Max(int *, int *);
int main()
{
    int a, b;
    printf("Enter two Numbers: ");
    scanf("%d%d", &a, &b);
    printf("Max: %d", find_Max(&a, &b));

    return 0;
}
int find_Max(int *p, int *q)
{
    return (*p > *q ? *p : *q);
}