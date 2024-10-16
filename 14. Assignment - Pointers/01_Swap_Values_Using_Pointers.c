// Write a function to swap values of two in variables of calling function. (TSRS)

#include <stdio.h>

void swap_num(int *, int *);

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("Before:\na = %d\nb = %d\n\n", a, b);
    swap_num(&a, &b);
    printf("After:\na = %d\nb = %d", a, b);

    return 0;
}
void swap_num(int *p, int *q)
{
    *p = *p + *q - (*q = *p);
    return;
}