// Write a recursive function to print first N natural numbers

#include <stdio.h>

void printN(int);

int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    printN(n);

    return 0;
}

void printN(int n)
{
    if (n == 1)
        printf("%d ", 1);
    else
    {
        printN(n - 1);
        printf("%d ", n);
    }
}
