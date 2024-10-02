// Write a recursive function to print first N odd natural numbers in reverse orde

#include <stdio.h>

void reverseOddN(int);
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    reverseOddN(n);
    return 0;
}

void reverseOddN(int n)
{
    if (n == 1)
        printf("1 ");
    else
    {
        printf("%d ", 2 * n - 1);
        reverseOddN(n - 1);
    }
}

/*
void reverseOddNum(int n)
{
    if (n > 0)
    {
        printf("%d ", 2 * n - 1);
        reverseOddNum(n - 1);
    }
}
*/