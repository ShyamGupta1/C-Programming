// Write a recursive function to calculate HCF of two numbers

#include <stdio.h>

int find_HCF(int, int);
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("HCF is: %d", find_HCF(a, b));

    return 0;
}

int find_HCF(int a, int b)
{
    if (a > b)
    {
        if (a % b == 0)
            return b;
        else
            return find_HCF(a % b, b);
    }
    else
    {
        if (b % a == 0)
            return a;
        else
            return find_HCF(a, b % a);
    }
}