// Write a recursive function to print first N even natural numbers in reverse order

#include <stdio.h>

void reverseEvenN(int);

int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    reverseEvenN(n);
    return 0;
}
void reverseEvenN(int n)
{
    if (n > 0)
    {
        printf("%d ", 2 * n);
        reverseEvenN(n - 1);
    }
}