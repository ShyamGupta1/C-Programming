#include <stdio.h>
float SI(int, int, int);
int main()
{
    int p, r, t;
    printf("Enter principle, rate and time: ");
    scanf("%d%d%d", &p, &r, &t);
    printf("%f", SI(p, r, t));

    return 0;
}
float SI(int p, int r, int t)
{

    return p * r * t / 100.0;
}