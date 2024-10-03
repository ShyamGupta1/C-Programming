// Write a recursive function to print reverse of a given number

#include <stdio.h>

void reverseN(int);

int reverse(int);

int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    reverse(n);
    return 0;
}

void reverseN(int n)
{
    if (n > 0)
    {
        printf("%d", n % 10);
        reverseN(n / 10);
    }
}

int reverse(int n)
{
    if (n == 0)
        return 0;
    else
    {
        printf("%d", n % 10);
        reverse(n / 10);
    }
}
