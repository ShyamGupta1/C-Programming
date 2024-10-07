// Write a function to trim a string (removing trailing spaces).

#include <stdio.h>
#include <string.h>

char *trim_leading_spaces(char a[]);
int main()
{
    char str[50];
    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';
    printf("\nBefore\nSize: %d\nString: %s\n\n", strlen(str), str);
    printf("\nAfter\nSize: %d\nString: %s", strlen(str), trim_leading_spaces(str));

    return 0;
}

char *trim_leading_spaces(char a[])
{
    int i = strlen(a) - 1;
    // Index of first Non-space char from last
    while (a[i] == ' ' || a[i] == '\t' || a[i] == '\n')
        i--;
    a[i + 1] = '\0';
    return a;
}