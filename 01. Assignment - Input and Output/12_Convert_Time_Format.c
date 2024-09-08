#include <stdio.h>

int main()
{
    int hours, minutes;
    printf("Enter time (HH : MM): ");
    scanf("%d : %d", &hours, &minutes);
    printf("%d Hour and %d Minutes", hours, minutes);
    printf("\n");
    return 0;
}
