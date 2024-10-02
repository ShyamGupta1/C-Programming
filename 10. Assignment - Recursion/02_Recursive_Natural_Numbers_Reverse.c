// Write a recursive function to print first N natural numbers in reverse order

#include <stdio.h>

void reverseN(int n);

int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    reverseN(n);

    return 0;
}

void reverseN(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        reverseN(n - 1);
    }
}
