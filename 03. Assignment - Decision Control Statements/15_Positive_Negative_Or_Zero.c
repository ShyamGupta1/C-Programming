#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf(a ? a > 0 ? "Positive" : "Negative" : "Zero");
    return 0;
}
