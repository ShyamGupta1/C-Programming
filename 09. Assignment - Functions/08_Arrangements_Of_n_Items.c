#include <stdio.h>
int fact(int);
int arrangements(int, int);
int main()
{
    int n, r;
    printf("Enter n and r: ");
    scanf("%d%d", &n, &r);
    printf("%d", arrangements(n, r));

    return 0;
}

int arrangements(int n, int r)
{

    int ans;
    ans = fact(n) / fact(n - r);
    return ans;
}

int fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact = fact * i;
    return fact;
}