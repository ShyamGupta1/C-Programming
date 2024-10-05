// Write a recursive function to print first N terms of Fibonacci series

#include <stdio.h>
int fibonacci_term(int);
void fibonacci_series(int);
int main()
{
    int a = -1, b = 1, c, n;
    printf("Enter N: ");
    scanf("%d", &n);
    fibonacci_series(n);

    return 0;
}

int fibonacci_term(int n)
{
    if (n == 0 || n == 1)
        return n;
    return fibonacci_term(n - 1) + fibonacci_term(n - 2);
}
void fibonacci_series(int n)
{
    if (n == 0)
        printf("%d ", n);
    else
    {
        fibonacci_series(n - 1);
        printf("%d ", fibonacci_term(n));
    }
}
