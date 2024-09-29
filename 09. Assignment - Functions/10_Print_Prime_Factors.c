#include <stdio.h>
void prime_Factors(int);
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    prime_Factors(n);

    return 0;
}

void prime_Factors(int n)
{
    for (int i = 2; i <= n;)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
            n = n / i;
        }
        else
            i++;
    }
}