#include <stdio.h>

int main()
{
    char a;
    printf("Enter a character: ");
    scanf("%c", &a);

    printf(65 <= a && a <= 90 ? "Uppercase" : 97 <= a && a <= 122 ? "Lowercase"
                                          : 48 <= a && a <= 57    ? "Digit"
                                                                  : "Special Character");

    return 0;
}