// Write a recursive function to print binary of a given decimal number

#include <stdio.h>

void printBinary(int);
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    if (n == 0)
        printf("0");
    else
        printBinary(n);
    return 0;
}

void printBinary(int n)
{
    if (n > 0)
    {
        printBinary(n / 2);
        printf("%d ", n % 2);
    }
}
