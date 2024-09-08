#include <stdio.h>

int main()
{
    char c1, c2, c3;
    printf("Enter three Characters: ");
    scanf("%c,%c,%c", &c1, &c2, &c3);
    printf("%c - %d\n", c1, c1);
    printf("%c - %d\n", c2, c2);
    printf("%c - %d\n", c3, c3);
    printf("\n");
    return 0;
}