#include <stdio.h>
int check(int, int);
int main()
{
    int n, digit;
    printf("Enter a Number and a digit: ");
    scanf("%d%d", &n, &digit);
    printf(check(n, digit) ? "True" : "False");
    return 0;
}

int check(int n, int d)

{
    while (n)
    {
        int rem;
        rem = n % 10;
        if (rem == d)
            return 1;
        n = n / 10;
    }
    return 0;
}